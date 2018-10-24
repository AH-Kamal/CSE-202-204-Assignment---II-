#include <bits/stdc++.h>
using namespace std;

int fact(int n);

int main()
{
    int n;
    cout<<"Give me a number: ";
    cin>>n;

    int result = fact(n);

    cout<<"Factorial of "<<n<<" is: "<<result<<endl;

    return 0;
}

int fact(int n)
{
    //cout<<"I am calculating F("<<n<<")\n";

    if (n < 1) return 1;

    int F = n*fact(n-1);

    //cout<<"Done ! F("<<n<<") = "<<F<<"\n";

    return F;
}
