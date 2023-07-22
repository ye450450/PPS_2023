#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int n;
vector<int> p;

int main(void){
    cin >> n;

    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        vector<int>::iterator t = find(p.begin(), p.end(), tmp);
        if(t == p.end()) p.push_back(tmp);
    }

    sort(p.begin(), p.end());

    for(int i = 0; i < p.size(); i++) cout << p.at(i) << " ";
}

