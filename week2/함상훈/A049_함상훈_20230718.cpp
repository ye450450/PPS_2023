#include <iostream>

using namespace std;

int main()
{
    
    string str;

    while(1)
    {
        cin >> str;
        if(str == "end") break;
        char pre;
        int mo_count = 0;
        int ja_count = 0;
        int mo_check = 0;
        int check = 0;
        for(int i = 0; i<str.size(); i++)
        {
            if(i!=0 && (pre == str[i]) && pre != 'e' && pre !='o')
            {
                check = 1;
                break;
            }
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                ja_count = 0;
                mo_count++;
                mo_check = 1;
                if(mo_count == 3)
                {
                    check = 1;
                    break;
                }
            }
            else
            {
                mo_count = 0;
                ja_count++;

                if(ja_count == 3)
                {
                    check = 1;
                    break;
                }
            } 
            pre = str[i];
        }

        if(check == 0)
        {
            if(mo_check == 1) cout << "<" << str << "> is acceptable.\n";
            else cout << "<" << str << "> is not acceptable.\n";
        }
        else cout << "<" << str << "> is not acceptable.\n" ;
    }

    return 0;
}