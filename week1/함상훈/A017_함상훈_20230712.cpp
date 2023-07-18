//PPS A017

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int arr[10] = {0}; // count number of digits
    int num = 0;

    cin >> num;

    while(num > 0) 
    {
        arr[num%10] +=1 ;
        num /= 10;
    }

    //6과 9는 하나의 숫자로 생각한다.
    int temp = 0;
    temp = ceil((arr[6] + arr[9]) / (float)2);
    arr[6] = temp;
    arr[9] = temp;

    cout << *max_element(begin(arr),end(arr));
}