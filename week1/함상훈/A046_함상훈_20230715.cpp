//PPS A046

#include <iostream>
#include <iostream>
using namespace std;

int main()
{
    string name;
    int first_name_count[26] = {0};
    int num;

    cin >> num;

    for(int i=0; i<num; i++)
    {
        cin >> name;
        first_name_count[(int)(name[0]) - 'a']++;
    }
    string result;
    for(int i=0; i<26; i++)
    {
        if(first_name_count[i]>=5) result.push_back(char(i+'a'));
    }
    if(result.size() != 0 ) cout << result;
    else cout << "PREDAJA";

    return 0;
}