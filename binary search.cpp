#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int binary_search(int A[], int N, int x);

int main()
{
    int T, N, x, i, position;
    scanf("%d", &T);

    while (T--)
    {
        scanf("%d %d", &N, &x);
        int A[N];

        for (i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
        }

        position = binary_search(A, N, x);

        printf("%d\n", position);
    }

    return 0;
}

int binary_search(int A[], int N, int x)
{
    int left = 0, right = N-1, mid;

    while (left <= right)
    {
        mid = (left+right)/2;

        if (A[mid] == x)
            return mid;

        if (A[mid] < x)
            left = mid+1;

        else
            right = mid-1;
    }

    return -1;
}
