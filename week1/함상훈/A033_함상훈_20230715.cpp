//PPS A033

#include <iostream>

using namespace std;

int main()
{   
    int score;
    int score_sum[5] = {0};
    int max = 0;
    int index;

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<4; j++)
        {
            cin >> score;
            score_sum[i] += score;
        }
        if(score_sum[i] > max)
        {
            max = score_sum[i];
            index = i;
        }   
    }
    cout << index+1 << " " << score_sum[index];
}