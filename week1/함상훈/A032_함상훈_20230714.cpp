//PPS A032

#include <iostream>
#include <vector>

#define MAX 14
using namespace std;
/*

    1  5  15 35 70
    1  4  10 20 35 56 
    1  3  6  10 15 21 28 
    1  2  3  4  5  6  7  8 ....
*/




int CountPeople(int floor, int room, vector<vector<int>> &v2);

int main()
{
    vector<int> v1(14);
    vector<vector<int>> v2;
    int test;
    int floor;
    int room;

    v1[0] = 1;

    v2.push_back(v1);

    for(int i=1; i<14; i++)
    {
        v2[0][i] = i+1;
    }

    cin >> test;
    for(int i=0; i<test; i++)
    {
        cin >> floor >> room;
        for(int j=v2.size(); j<=floor; j++) v2.push_back(v1);
        cout << CountPeople(floor,room,v2) << endl;
    }

    return 0;
}

int CountPeople(int floor, int room, vector<vector<int>> &v2)
{
    if(v2[floor][room-1] == 0) v2[floor][room-1] = CountPeople(floor,room-1,v2) + CountPeople(floor-1,room,v2);
    return v2[floor][room-1];
}
