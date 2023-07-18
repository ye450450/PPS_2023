//PPS A020

#include <iostream>

using namespace std;

int main()
{
    int max = 0;
    int count = 0;
    int drop;
    int ride;

    for(int i=0; i<4; i++)
    {
        cin >> drop;
        cin >> ride;

        count = count - drop;
        count = count + ride;
        if(count > max) max = count;
    }
    cout << max;
}