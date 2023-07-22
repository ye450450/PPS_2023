#include <iostream>

using namespace std;

int main()
{
    int num;
    string str;
    int count=0;
    cin >> num;
    for(int i=0; i<num; i++)
    {
        int check[26]={0};
        cin >> str;
        count++;
        char pre = str[0];
        check[(int)(str[0]-'a')] = 1;
        for(auto i : str)
        {
            if(i == pre) continue;
            else
            {
                if(check[(int)(i-'a')] == 0)
                {
                    check[(int)(i-'a')] = 1;
                    pre = i;
                }
                else
                {
                    count--;
                    break;
                }
            }
        }
    }
    cout << count;
}