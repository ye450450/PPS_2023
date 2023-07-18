//PPS A029

#include <iostream>

using namespace std;

int main()
{
    int door_count;
    int door_open;

    cin >> door_count;
    cin >> door_open;

    if(door_count > 5) cout << "Love is open door";
    else
    {
        for(int i=1; i<door_count; i++)
        {
            door_open++;
            cout << door_open % 2 << endl;
        }
    }
}