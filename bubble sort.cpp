#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, k, n;
    cin>>n;

    int ara[n], temp[n];

    for (i = 0; i < n; i++)
        cin>>ara[i];

    for (k = 1; k <= n; k++)
    {
        for (i = 0, j = 1; i <= n-2; i++, j++)
        {
            if (ara[i] > ara[j])
            {
                temp[i] = ara[i];
                ara[i] = ara[j];
                ara[j] = temp[i];
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        if (i > 0) cout<<" ";

        cout<<ara[i];
    }
    cout<<endl;

    return 0;
}
