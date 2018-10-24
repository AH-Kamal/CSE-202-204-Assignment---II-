#include <bits/stdc++.h>
using namespace std;

long long f_ara[50];

long long fib(long long n);

int main()
{
    long long n;
    scanf("%lld", &n);

    f_ara[1] = 1;
    f_ara[2] = 1;

    printf("%lldth fibonacci number is : %lld\n", n, fib(n));


    return 0;
}

long long fib(long long n)
{
    if (f_ara[n] != 0) return f_ara[n];

    if(n == 1 || n == 2) return f_ara[n];

    f_ara[n] = fib(n-1) + fib(n-2);

    return f_ara[n];
}
