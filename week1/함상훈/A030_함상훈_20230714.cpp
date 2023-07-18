//PPS A030


#include <iostream>

using namespace std;

/*
    좋은 날 -> 좋은 날 0.7
    좋은 날 -> 싫은 날 0.3

    싫은 날 -> 좋은 날 0.5
    싫은 날 -> 싫은 날 0.5

    
    싫은 날 -> 좋은 날 -> 좋은 날
    싫은 날 -> 싫은 날 -> 좋은 날

    싫은 날 -> 좋은 날 -> 싫은 날  
    싫은 날 -> 싫은 날 -> 싫은 날

    => 다음날의 좋은 날 확률은 이전 좋은 날의 확률에 좋은 날의 확률을 곱한 값과 이전 싫은 날의 확률에 좋은 날로 갈 확률을 곱한 값을 더한 것과 같다.
*/

int main()
{
    int N; //N Day
    int current; // current state, 0 -> happy, 1 -> sad
    float happy;
    float sad;

    float p[4]; //p[0] : happy -> hapyy, p[1] : happy -> sad, p[2] : sad -> happy, p[3] : sad -> sad

    cin >> N;
    cin >> current;
    cin >> p[0] >> p[1] >> p[2] >> p[3];

    if(current == 0)
    {
        happy = p[0]; //happy -> hapyy
        sad = p[1]; //happy -> sad
    }
    else
    {
        happy = p[2]; //sad -> happy
        sad = p[3]; // sad -> sad
    }

    for(int i=0; i< N-1; i++) //the last Day has already been determined, happy or sad
    {
        float temp = happy;
        happy = happy * p[0] + sad * p[2];
        sad = sad * p[3] + temp * p[1];
    }

    happy *= 1000;
    sad *= 1000;

    cout << (int)happy << endl << (int)sad;
}
