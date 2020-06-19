#include <algorithm>
#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main()
{
    int result = 0;
    int n = 6;

    for (long long i = pow(10, n); i < pow(10, n + 1); i++)
    {
        string str = to_string(i * i);
        reverse(str.begin(), str.end());
        if (str.find("12345") == 0)
        {
            cout << str << " ";
            reverse(str.begin(), str.end());
            cout << str << " " << i << endl;
            result++;
        }   
    }
    cout << result << endl;
    return 0;
}