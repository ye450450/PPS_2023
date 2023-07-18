//PPS A008 평균은 넘겠지
#include <iostream>

using namespace std;
#define MAX 1000
int main()
{
    int test_num; //number of test case
    int number; //number of student
    int score[MAX]; //student's score
    int average; //average of each case
    int sum = 0; //sum of student's score
    int count = 0; //number of sudent who over average

    cout<<fixed;
    cout.precision(3);

    cin >> test_num;

    for(int i=0; i< test_num; i++)
    {
        cin >> number;
        //store student's socre and calculate sum
        for(int j=0; j<number; j++)
        {
            cin >> score[j];
            sum += score[j];
        }
        //calculate average
        average = sum / (float)number;

        //count the number of the student who over the average score
        for(int j=0; j<number; j++)
        {
            if(score[j] > average ) count++;
        }

        //print ratio of student who over the average score
        cout << count / (float)number * 100<< "%" << endl;
        sum = 0;
        count = 0;
    }
}