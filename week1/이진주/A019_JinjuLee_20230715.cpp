#include <iostream>
using namespace std;
//17210

/*

규칙 1 : 문을 여는 방법은 밀어서 여는 법과 당겨서 여는 법이 있다.
규칙 2 : 연속 2번 같은 방법으로 문을 열 수 없다.
규칙 3 : 2의 배수 문들은 반드시 같은 방법으로 문을 열어야 한다.
규칙 4 : 3의 배수 문들은 반드시 같은 방법으로 문을 열어야 한다.

총 문의 개수 N(2 ≤ N ≤ 2,500,000,000), 첫 번째 문을 통과할 때 문을 연 방법이 주어진다.
밀어서 여는 법은 숫자 0, 당겨서 여는 법은 숫자 1

두 번째 문부터 문을 여는 방법을 한줄에 하나씩 출력한다. 
만약 탈출이 불가능하다면 "Love is open door"를 출력한다.
*/

int n, start;

/*
결국 010101또는 101010이어야 하는건디
2의 배수들, 3의 배수들이 같은지 확인해보면 될듯. 안되면 love고 되면 번갈아 문 갯수만큼 출력하고.

아니근데 규칙2에 의거하면 2배수는 당연히 다 같을거고 3배수는 같을수가 없음
걍 6이 등장하는 순간 불가능한거임
일케해도되나; 
*/

//01와리가리 쳐주는 친구
int next(int current){
    if(current == 0) return 1;
    else return 0;
}

int main(){
    cin >> n >> start;
    if(n > 5) cout <<  "Love is open door";
    else{
        for(int i = 0; i < n-1; i++){
            start = next(start);
            cout << start << "\n";
        }
    }

}