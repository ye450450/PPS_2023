//PPS A021

#include <iostream>

using namespace std;

int main()
{
    int count;
    int plug;
    int result = 0;
    cin >> count;

    cin >> result;

    for(int i=1; i<count; i++)
    {
        cin >> plug;
        result = result + plug - 1;
    }

    cout << result;
}