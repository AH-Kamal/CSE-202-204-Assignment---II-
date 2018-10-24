#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text = "AAAAA";
    string temp = "AAAAA";

    string str = "BBB";

    text.insert(1-1, str);
    cout<<text<<endl;

    text = temp;
    text.insert(3-1, str);
    cout<<text<<endl;

    text = temp;
    text.insert(6-1, str);
    cout<<text<<endl;


    return 0;
}

