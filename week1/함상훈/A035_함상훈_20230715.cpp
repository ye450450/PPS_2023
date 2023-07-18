//PPS A035

#include <iostream>

using namespace std;

int main()
{
    cout<<fixed;
    cout.precision(2);

    int test_num;
    float num;
    string operater[6];
    
    cin >> test_num;
    for(int i=0; i<test_num; i++)
    {
        cin >> num;
        getline(cin,operater[i]);
        for(auto OP : operater[i])
        {
            if(OP == '@') num *= 3;
            else if(OP == '%') num += 5;
            else if(OP == '#') num -=7;
        }
        cout << num << endl;
    }
}