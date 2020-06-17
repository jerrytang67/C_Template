#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "123" << endl;

    string str;
    getline(cin, str);

    cout << str.length() << endl;

    return 0;
}