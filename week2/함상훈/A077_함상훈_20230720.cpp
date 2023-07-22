#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

vector<pair<int, int>> point;
vector<int> num;
bool func(pair<int,int> a, pair<int,int> b)
{
	return (a.second > b.second);
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    for(int i = 0; i < 8; i++){
        int score;
        cin >> score;
        pair<int, int> tmp = {i+1, score};
        point.push_back(tmp);
    }

    sort(point.begin(), point.end(), func);

    int sum = 0;
    for(int i = 0; i < 5; i++){
        sum += point.at(i).second;
        num.push_back(point.at(i).first);
    } 
    cout << sum << "\n";

    sort(num.begin(), num.end());
    
    for(int i = 0; i < 5; i++) cout << num.at(i)<< " ";
   
}