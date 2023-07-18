//PPS A019
#include <iostream>

using namespace std;

int main()
{
 

    int A, B, C;
    int result[10] = {0};
    int product;

    cin >> A;
    cin >> B;
    cin >> C;

    product = A * B * C;

    while(product > 0)
    {
        result[product % 10]++;
        product = product / 10;
    }

    for(int i=0; i<10; i++)
    {
        cout << result[i] << '\n';
    }
}