#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    string a;
    cin >> a;
    reverse(a.begin(), a.end());
    cout << a << endl;
    return 0;
}