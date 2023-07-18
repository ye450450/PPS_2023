//PPS A034

#include <iostream>

using namespace std;

int main()
{
    int num;
    int count = 0;
    int remain[42] = {0};
    
    for(int i=0; i<10; i++)
    {
        cin >> num;
        if( remain[num % 42] == 0)
        {
            count++;
            remain[num % 42] = 1;
        }
    }
    cout << count;
}