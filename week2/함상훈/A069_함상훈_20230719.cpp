#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cmath>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int n, k;
vector<int> circle, Josephus;

int main(void){
    SPEEDUP
    cin >> n >> k;
    for(int i = 1; i <= n; i++) circle.push_back(i);

    int start = 0, targit;
    while (circle.size() > 0){
        targit = (start+(k-1))%circle.size();
        Josephus.push_back(circle.at(targit));
        circle.erase(circle.begin()+targit);
        start = targit;
    }

    cout << "<";
    for(int i = 0;i < Josephus.size()-1; i++){
        cout << Josephus.at(i) << ", ";
    }
    cout << Josephus.back() << ">";
    
    


}
