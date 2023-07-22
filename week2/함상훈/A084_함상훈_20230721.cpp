#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cstring>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

//string n;
char n[1001];
vector<string> vec;

int main(void){
    SPEEDUP

    cin >> n;

    for(int i = 0; i < strlen(n); i++) vec.push_back(&n[i]);
    sort(vec.begin(), vec.end());
    for(int i = 0; i < strlen(n); i++) cout << vec.at(i) << "\n";
    

}