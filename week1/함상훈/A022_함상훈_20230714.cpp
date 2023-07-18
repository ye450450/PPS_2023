//PPS A022

#include <iostream>

#define MAX 20
using namespace std;

int Youngsic(int call_time[],int count);
int Minsic(int call_time[], int count);

int main()
{
    int call_time[MAX];
    int count;

    cin >> count;
    for(int i=0; i<count; i++)
    {
        cin >> call_time[i];
    }
    int Y = Youngsic(call_time, count);
    int M = Minsic(call_time, count);

    if(  Y < M ) cout << "Y " << Y;
    else if(Y > M) cout << "M " << M;
    else cout << "Y M " << Y; 

}

int Youngsic(int call_time[], int count)
{
    int fee = 0;
    for(int i=0; i<count; i++)
    {   
        int temp = call_time[i];
        do
        {
            fee += 10;
            temp -= 30;
        }while(temp >= 0);
    }
    return fee;
}

int Minsic(int call_time[], int count)
{
    int fee = 0;
    for(int i=0; i<count; i++)
    {
        int temp = call_time[i];
        do
        {
            fee += 15;
            temp -= 60;
        }while(temp >= 0);
    }  
    return fee;
}


