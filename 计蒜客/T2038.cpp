#include <iostream>
#include <vector>
using namespace std;
vector<int> add(vector<int> &A, vector<int> &B)
{
    int t = 0;
    vector<int> C;
    for (int i = 0; i < A.size() || i < B.size(); i++)
    {
        if (i < A.size())
            t += A[i];
        if (i < B.size())
            t += B[i];
        C.push_back(t % 10);
        t /= 10;
    }
    if (t)
        C.push_back(t);
    return C;
}

int main()
{
    string a, b;
    vector<int> A, B, C;
    cin >> a >> b;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        A.push_back(a[i] - '0');
    }

    for (int i = b.size() - 1; i >= 0; i--)
        B.push_back(b[i] - '0');

    C = add(A, B);

    bool first = true;

    for (int i = C.size() - 1; i >= 0; i--)
    {
        if (C[i] == 0 && first)
        {
            continue;
        }
        else
        {
            first = false;
            cout << C[i];
        }
    }
    if (a == "0" && b == "0")
    {
        cout << 0;
    }

    cout << endl;

    return 0;
}