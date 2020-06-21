#include <iostream>
#include <string>
using namespace std;

int main()
{

    char c;
    cin >> c;

    cout << "  " << c << endl;
    cout << " " << string(3, c) << endl;
    cout << string(5, c) << endl;

    return 0;
}