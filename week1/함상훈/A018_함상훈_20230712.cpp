//PPS A018 보물

#include <iostream>
#include <vector>
#include <map>
#include<algorithm>

#define MAX 50
using namespace std;

bool compare(int a, int b);

int main()
{
    multimap<int, int> map;
    int A[MAX];
    int newA[MAX];
    int B[MAX];
    int size;
    int result=0;

    cin >> size;
    for(int i=0; i< size; i++)
    {
        cin >> A[i];
    }
    for(int i=0; i< size; i++)
    {
        cin >> B[i];
    }


    // 맵에 배열의 값과 인덱스 쌍 저장

    sort(A,A+size, compare);
    for (int i = 0; i < size; i++) 
    {
        map.insert(pair<int,int>(B[i], i));
    }
    int j=0;
    for(auto i : map)
    {
        newA[i.second] = A[j];
        j++;
    }

    for(int i=0; i< size; i++)
    {
        result += newA[i] * B[i];
    }

/*
for(int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < size; i++)
    {
        cout << newA[i] << " ";
    }

*/
    
    cout << result;
}


bool compare(int a, int b)
{
    return a > b;
}