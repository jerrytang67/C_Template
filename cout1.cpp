#include <bitset>
#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    bitset<8> bits;

    cin >> bits;

    long long  a = bits.to_ulong();

    int ans = 0;

    while (a != 0)
    {
        a = a & (a - 1);
        ans++;
    }
    cout << ans;

    return 0;
}