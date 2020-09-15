#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100001;
string x, y;
int a[MAXN], b[MAXN], c[MAXN], la, lb, lc;

int main()
{
    // 1.读入数据
    cin >> x >> y;

    // 2.计算长度
    la = x.length();
    lb = y.length();

    // 3.字符串转数组
    for (int i = 0; i < la; i++)
    {
        a[la - i] = x[i] - '0';
    }

    for (int i = 0; i < lb; i++)
    {
        b[lb - i] = y[i] - '0';
    }

    // 预测结束长度
    lc = max(la, lb);

    // 按最低位开始计算
    for (int i = 1; i <= lc; i++)
    {
        c[i] += a[i] + b[i];
        c[i + 1] = c[i] / 10;
        c[i] %= 10;
    }

    // 计算最高位是否进位了,进位的话把结束长度加1
    if (c[lc + 1] > 0)
        lc += 1;

    // 倒序输出
    for (int i = lc; i >= 1; i--)
    {
        cout << c[i];
    }

    return 0;
}
