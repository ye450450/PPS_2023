//PPS A007 음계판볋하기

#include <iostream>

using namespace std;

bool is_ascending(int a[]);
bool is_decending(int a[]);

 int main()
 {

    int arr[8] = { 0 };

    for(int i=0; i<8; i++)
    {
        cin >> arr[i];
    }

    if(is_ascending(arr)) cout << "ascending";
    else if(is_decending(arr)) cout << "descending";
    else cout << "mixed";
    
 }   
    
bool is_ascending(int a[])
{
    int temp = a[0];
    for(int i=1; i<8; i++)
    {
        if(temp > a[i]) return false;
        temp = a[i];
    }
    return true;
}

bool is_decending(int a[])
{
    int temp = a[0];
    for(int i=1; i<8; i++)
    {
        if(temp < a[i]) return false;
        temp = a[i];
    }
    return true;
}