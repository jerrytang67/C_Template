#include <bits/stdc++.h>

using namespace std;
int bx, by, mx, my;
int pan[20][20];

int local[8][2] = {
    {2, 1},
    {2, -1},
    {1, 2},
    {1, -2},
    {-1, 2},
    {-1, -2},
    {-2, 1},
    {-2, -1}};

void judge()
{
    pan[mx][my] = -1;
    for (int i = 0; i < 8; ++i)
    {
        if ((mx + local[i][0] >= 0) && (my + local[i][1] >= 0))
            pan[mx + local[i][0]][my + local[i][1]] = -1;
    }
    for (int i = 0; i <= bx; ++i)
    { // 初始化第一列的值
        if (pan[i][0] == -1)
            break;
        else
            pan[i][0] = 1;
    }

    for (int i = 0; i <= by; ++i)
    { // 初始化第一行的值
        if (pan[0][i] == -1)
            break;
        else
            pan[0][i] = 1;
    }
}

void printPan()
{
    for (int i = 0; i <= bx; ++i)
    {
        for (int j = 0; j <= by; ++j)
        {

            printf("%4d ", pan[i][j]);
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    cin >> bx >> by >> mx >> my;
    judge();

    // printPan();

    for (int i = 1; i <= bx; ++i)
    {
        for (int j = 1; j <= by; ++j)
        {

            if (pan[i][j] == -1)  
                continue;
            if (pan[i - 1][j] >= 0)
                pan[i][j] += pan[i - 1][j];

            if (pan[i][j - 1] >= 0)
                pan[i][j] += pan[i][j - 1];
        }
    }

    // printPan();

    cout << pan[bx][by] << endl;
    return 0;
}