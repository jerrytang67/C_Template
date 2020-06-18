#include <iostream>
#include <string>
using namespace std;

int main()
{
    char a;
    cin >> a;
    cout << "  " << string(1, a) << endl;
    cout << " " << string(3, a) << endl;
    cout << "" << string(5, a) << endl;
    cout << " " << string(3, a) << endl;
    cout << "  " << string(1, a) << endl;
    return 0;
}