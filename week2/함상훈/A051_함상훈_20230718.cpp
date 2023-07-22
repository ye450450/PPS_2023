#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

string n;
string d[10] = {"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

int main(void){
    SPEEDUP
    cin >> n;
    int time = 0;
    for(int i = 0; i < n.length(); i++){
        for(int k = 0; k < 10; k++){
            size_t p = d[k].find(n[i]);
            if(p != string::npos){
                time += (k+1);
                break;
            }
        }
    }
    cout << time;
}
