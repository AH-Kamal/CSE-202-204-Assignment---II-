#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text = "AAABBB";
    cout<<text.erase(2-1, 2)<<endl;

    text = "JOHN PAUL JONES";
    cout<<text.erase(6-1, 5)<<endl;

    text = "AAABBB";
    string p1 = "AA";
    string p2 = "BB";

    size_t k = text.find(p1);
    //text.erase(k, p2.size());
    cout<<text.replace(k, p1.size(), p2)<<endl;

    text = "JOHN PAUL JONES";
    p1 = "PAUL";
    p2 = "DAVID";
    k = text.find(p1);

    //text.erase(k, p2.size());
    cout<<text.replace(k, p1.size(), p2)<<endl;
    //cout<<k<<endl;


    return 0;
}

