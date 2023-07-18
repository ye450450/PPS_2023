//PPS A031

#include <iostream>

using namespace std;

/*
    N * M을 1 * 1로 만들기 위해서 (N-1) + N * (M-1)번 자르면 된다.
*/
int main()
{
    int N, M;

    cin >> N >> M;

    cout << (N-1) + N * (M-1);
}