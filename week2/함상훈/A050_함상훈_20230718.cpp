#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

string n;

int main(void){
    SPEEDUP
    cin >> n;
    string decode = "";
    for(int i = 0; i < n.length(); i++){
        int caesar = (n[i]-3);
        if(caesar < 'A') caesar += 26;
        decode += caesar;
    }
    cout << decode;
}
