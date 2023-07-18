//PPS A045

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string word;
    int count[26] = {0};

    cin >> word;
    transform(word.begin(), word.end(), word.begin(), ::toupper);

    //65 아스키코드로 A
    for(auto i : word)
    {
        count[(int)i - 65]++;
    }
    
    int max = 0;
    int index = 0;
    int check = 0; 
    for(int i = 0; i< 26; i++)
    {
        if(count[i] == max) check = 1;
        else if( count[i] > max)
        {
            check = 0;
            max = count[i];
            index = i;
        }
    }
    if( check == 0)
        cout << (char)(index + 65);
    else cout << '?';
}