//PPS A028



/*
    숫자 자료형으로 저장이 되지 않는 큰 숫자의 덧셈을 위해서 문자열로 계산한다.
    각 문자열의 맨 뒤에서부터 carry를 고려하여 덧셈을한다.
    알고리즘
    1. A와 B의 길이를 비교한다.
    2. A,B중 size가 큰 것부터 시작해서 A와 B의 차이의 절대값까지 감소하며 반복한다. -> 덧셈 자리수를 맞추기 위해서
        2-1 각 문자열의 끝에서부터 시작하기 위해서 A,B의 사이즈 크기를 저장하고 반복문에서 각 문자열 size-1을 통해 덧셈을 한다.
            이때 문자열을 숫자로 바꾸기 위해서  아스키 코드값 '0'을 빼준다.
        2-2 이전에 carry가 존재하면 덧셈에 1을 더해주고 carry를 0으로 바꿔준다.
        2-3 더한 총값이 10을 넘어가면 carry를 1로 바꿔주고 result에 총값 % 10을 char로 변환하여 저장해준다.
            넘어가지 않는다면 그냥 result에 char로 변환하여 저장해준다.
        2-4 각 문자열의 사이즈를 1씩 감소시킨다.
    3. 반복문이 끝나면 A, B둘 중 하나는 아직 남아있는 자리수가 있기 때문에 둘 중 사이즈가 0이 아닌 문자열을 이전 반복문이 끝난 위치부터 끝날때 까지 반복한다.
        3-1 carry를 고려해서 result에 저장해준다.
    4. carry가 존재하면 1을 result에 저장해준다.
    5. result에 저장된 값은 반대로 저장되어 있기 때문에 거꾸로 출력해준다.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string A, B;
    string result;
    int A_size, B_size;
    int carry = 0;
    int start;
    int sub;
    cin >> A;
    cin >> B;
   
    A_size = A.size();
    B_size = B.size();
    
    if(A_size > B_size)
    {
        start = A_size;
        sub = A_size - B_size;
    }
    else 
    {
        start = B_size;
        sub = B_size - A_size;
    }
    
    
    int i=0;
    for(i = start; i > sub; i--)
    {   
        int num = 0;
        num = (int)(A[A_size-1] - '0') + (int)(B[B_size-1] - '0') ;
        
        if(carry == 1)
        {
            num +=1;
            carry = 0;
        }
        if(num >= 10)
        {
            carry = 1;
            result.push_back((char)(num % 10) + '0');
        } 
        else result.push_back((char)num + '0');
        A_size--;
        B_size--;
    }

    if(A_size != 0)
    {
        for(int j=i; j>0; j--)
        {   
            int num = (int)(A[j-1]) - '0';
            if(carry == 1)
            {
                num +=1;
                carry = 0;
            }
            if(num >= 10)
            {
                carry = 1;
                result.push_back((char)(num % 10) + '0');
            } 
            else result.push_back((char)num + '0');
        }
    }
    else
    {
        for(int j=i; j>0; j--)
        {
            int num = (int)(B[j-1]) - '0';
            if(carry == 1)
            {
                num +=1;
                carry = 0;
            }
            if(num >= 10)
            {
                carry = 1;
                result.push_back((char)(num % 10) + '0');
            } 
            else result.push_back((char)num + '0');
        }
    }
    
    if(carry == 1) result.push_back('1');
    for(i = result.size(); i > 0; i--)
    {
        cout << result[i-1];
    }
}