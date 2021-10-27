#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

	int isoff[n+1] = {};

    for(int i = 0; i <=m ; i++)
    {
        for(int j = i; j<=n; j+=i )
        {
            isoff[j] = !isoff[j];
        }
    }

    int kaidedeng[n+1]  ={};
    int count =0;
    for (int i = 1; i <= n; ++i) {
        if(isoff[i] == 1)
        {
            kaidedeng[count] = i;
            count++;
        }
    }
    for (int i = 0; i < count; ++i) {
        if(i) cout<< ",";
        cout<< kaidedeng[i];
    }

    return 0;
}
