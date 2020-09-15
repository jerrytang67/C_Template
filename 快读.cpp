#include <bits/stdc++.h>

inline int read()
{
    register int s = 0, w = 1; //s是数值，w是符号
    register char ch = getchar();
    while (ch < '0' || ch > '9') //将空格、换行与符号滤去
    {
        if (ch == '-') //出现负号表示是负数
        {
            w = -1;
            ch = getchar(); //继续读入
        }
    }
    while (ch >= '0' && ch <= '9') //循环读取每一位的数字
    {
        s = s * 10 + ch - '0'; //将每一位的结果累加进s
        ch = getchar();
    }
    return s * w; //乘上符号
}

int main()
{
    int a = read();
    cout << a << endl;
    return 0;
}