#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cstring>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int n, m;
vector<pair<int, string>> vec;
bool func(pair<int, string> a, pair<int, string> b){return (a.second < b.second);}
string dict[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main(void){
    SPEEDUP

    cin >> m >> n;
    for(int i = m; i <= n; i++){
        string tmp = "";
        
        if(i/10 != 0) tmp = dict[i/10] + " " + dict[i%10];
        else tmp = dict[i%10];

        pair<int, string> t = {i, tmp};
        vec.push_back(t);
    }

    sort(vec.begin(), vec.end(), func);

    int count = 0; 

    for(int i = 0; i < vec.size(); i++){
        if(count >= 10){
            cout << "\n";
            count = 0;
        }
        cout << vec.at(i).first << " ";
        count ++;
    }


}