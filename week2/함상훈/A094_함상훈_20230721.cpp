#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

string n;
vector<char> vec;
int special = 0;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 0; i < n.length(); i++){
        if(n[i] == '='){
            if(i >=2 && (n[i-2] == 'd' && n[i-1] == 'z')){
                vec.pop_back(); //dz=
                vec.pop_back();
                special++;
                continue;
            }else if(n[i-1] == 'c' || n[i-1] == 's' || n[i-1] == 'z'){
                vec.pop_back(); //c=, s=, z=
                special++;
                continue;
            }
        }else if(n[i] == '-'){
            if(n[i-1] == 'c' || n[i-1] == 'd'){
                vec.pop_back(); //c-, d-
                special++;
                continue;
            } 
        }else if(i >= 0 && n[i] == 'j'){
            if(n[i-1] == 'l' || n[i-1] == 'n'){
                vec.pop_back(); //c-, d-
                special++;
                continue;
            } 
        }
        vec.push_back(n[i]);
    }
    cout << vec.size() + special;


}