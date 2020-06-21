#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b, i, t;
    int t1 = 1, t2 = 1, t3 = 0;
    cin >> a >> b;
    if (a > b)
    {
        t = a;
        a = b;
        b = t;
    }
    double c;
    c = sqrt(a * a + b * b);
    if (floor(c) != c)
    {
        c = sqrt(b * b - a * a);
        if (floor(c) != c)
        {
            cout << 0 << endl;
            return 0;
        }
    }
    for (i = 3; i <= (int)c + 1; i++)
    {
        t3 = (t1 + t2) % 10007;
        t1 = t2;
        t2 = t3;
    }

    cout << t3 << endl;
    return 0;
}