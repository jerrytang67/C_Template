#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    bool d[5000] = {true};
    for (int i = 1; i <= n; i++)
    {
        d[i] = true;
        for (int j = 1; j <= m; j++)
        {
            if (i % j == 0)
            {
                d[i] = !d[i];
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (!d[i])
        {
            if (i != 1)
                cout << ",";
            cout << i ;
        }
        // cout << d[i] << " " << i << endl;
    }
    cout << endl;
    return 0;
}