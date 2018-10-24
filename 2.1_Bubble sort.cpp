#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, k, n = 6;
    string str = "PEOPLE";
    char tmp_ch;
    int flag, C = 0, D = 0;

    for (k = 1; k <= n-1; k++)
    {
        flag = 0;
        for (i = 0; i <= n-k-1; i++)
        {
            flag = 0;
            C++;
            if (str[i] > str[i+1])
            {
                tmp_ch = str[i];
                str[i] = str[i+1];
                str[i+1] = tmp_ch;

                flag = 1;
                D++;
            }
        }
        if (flag == 0) break;
    }

    cout<<"Total comparison C = "<<C<<endl;
    cout<<"Total interchange D = "<<D<<endl;
    cout<<"New string >>> "<<str<<endl;


    return 0;
}
