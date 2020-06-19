#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 4)
        cout << 0;
    if (n == 4)
        cout << 1;
    if (n == 5)
        cout << 7;
    if (n == 6)
        cout << 72;
    if (n > 6)
        cout << "72" << string(n - 6, '0');
    return 0;
}