#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int i, j, k, result = 0;
    for (i = 0; i <= n; i += 3)
        for (j = 0; j <= n; j++)
        {
            k = n - i - j;
            if ( i / 3 +  3 * j + 5 * k  == n)
            {
                result++;
            }
        }

    if (result > 0)
    {
        printf("%d", result);
    }
    else
    {
        cout << "No Answer." << endl;
    }
    return 0;
}