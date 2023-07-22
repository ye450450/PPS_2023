#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <stack>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int n;
stack<int> s;

int main(void){
    SPEEDUP
    cin >> n;
    for(int i = 0; i < n; i++){
        string m;
        int a;
        cin >> m;

        if(m == "push"){
            cin >> a;
            s.push(a);
        }else if(m == "pop"){
            if(s.empty()) cout << "-1\n";
            else{
                cout << s.top() << "\n";
                s.pop();
            }
        }else if(m == "size"){
            cout << s.size() << "\n";
        }else if(m == "empty"){
            int isEmpty = (s.empty()) ? 1:0;
            cout << isEmpty << "\n";
        }else if(m == "top"){
            if(s.empty()) cout << "-1\n";
            else cout << s.top() << "\n"; 
        }




    }




}
