#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;


int n;
vector<string> vec;


int sumOfDigit(string s){
    int sum = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            sum += (s[i]-'0');
        }
    }
    return sum;
}

bool func(string a, string b){
    if(a.length() == b.length()){
        if(sumOfDigit(a) == sumOfDigit(b)){
            return (a < b);
        }else{
            return (sumOfDigit(a) < sumOfDigit(b));
        } 
    }else return (a.length() < b.length());
}



int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++){
        string a;
        cin >> a;
        vec.push_back(a);
    }

    sort(vec.begin(), vec.end(), func);

 
    for(int i = 0; i < vec.size(); i++) cout << vec.at(i) << endl;


}
