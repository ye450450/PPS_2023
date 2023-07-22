#include <iostream>
#include <algorithm>
#define SPEEDUP ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;


int n;
int num[10];

int main(void){
    SPEEDUP
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int i = 0; i < 10; i++){
            cin >> num[i];
        }
        sort(num, num+10);
        cout << num[7] << "\n";
    }
}
