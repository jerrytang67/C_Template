#include <iostream>
using namespace std;
int main()
{
    char a;
    cin >> a;
    if (a >= 97)
        cout << (char)(a - 32);
    else
    {
        cout << (int)a;
    }

    return 0;
}