#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int n;
vector<pair<string, int>> p;
bool func(pair<string,int> a, pair<string,int> b){return a.second<b.second;}

int main(void){
    cin >> n;

    for(int i = 0; i < n; i++){
        int age;
        string name;
        cin >> age >> name;
        pair<string, int> tmp = {name, age};
        p.push_back(tmp);
    }

    stable_sort(p.begin(), p.end(), func);

    for(int i = 0; i < n; i++) cout << p.at(i).second << " " << p.at(i).first << "\n";
}

