#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

bool func(pair<int,int> a, pair<int,int> b){
    if(a.first == b.first) return (a.second < b.second);
    else return (a.first < b.first);
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        pair<int, int> tmp = {x, y};
        point.push_back(tmp);
    }

    sort(point.begin(), point.end(), func);

    for(int i = 0; i < n; i++) cout << point.at(i).first << " " << point.at(i).second << "\n";

}

