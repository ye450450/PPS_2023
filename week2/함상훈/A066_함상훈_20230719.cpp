#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string n;
vector<int> vec;
bool desc(int i,int j){ return (i>j); }

int main(void){

    cin >> n;
    for(int i = 0; i < n.length(); i++) vec.push_back(n[i]-48);
    sort(vec.begin(), vec.end(), desc);
    for(int i = 0; i < vec.size(); i++) printf("%d", vec.at(i));

}