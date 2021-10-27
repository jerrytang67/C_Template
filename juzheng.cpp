#include <iostream>
using namespace std;

const int SIZE = 4;

int main()
{
    int a[SIZE + 1][SIZE + 1], sum1 = 0, sum2 = 0;
    for (int i = 1; i <= SIZE; i++)
        for (int j = 1; j <= SIZE; j++)
            cin >> a[i][j];

    for (int i = 1; i <= SIZE; i++)
    {
        sum1 += a[i][i];
        sum2 += a[i][SIZE - i + 1];
    }

    cout << sum1 << " " << sum2 << endl;

    return 0;
}