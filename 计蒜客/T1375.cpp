#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long x, y, z;
    int count = 0;
    if (n % 4 != 0)
    {
        cout << "No Answer." << endl;
        return 0;
    }

    for (long long k = 0; k <= n / 28; k++)
    {
        x = 4 * k;
        y = n / 4 - 7 * k;
        z = n / 4 * 3 + 3 * k;
        count++;
        cout << x << " " << y << " " << z << endl;
    }

    if (count == 0)
    {
        cout << "No Answer." << endl;
    }
    return 0;
}