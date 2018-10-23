#include <bits/stdc++.h>
using namespace std;

int binary_search(int A[], int N, int x);

int main()
{
    int position, item, N = 13;

    int DATA[N] = {11, 22, 30, 33, 40, 44, 55, 60, 66, 77, 80, 88, 99};

    while (1)
    {
        cout<<"Enter which item you want to search (enter 0 to exit):...?  ";

        cin>>item;

        if (item == 0) break;

        position = binary_search(DATA, N, item);

        if (position < 0) printf("Your searched element is not present in the DATA. Try again...\n\n");

        else   printf("Your searched element is in %dth position of the DATA.\n\n", position+1);
    }

    return 0;
}

int binary_search(int A[], int N, int x)
{
    int left = 0, right = N-1, mid;

    while (left <= right)
    {
        mid = (left+right)/2;

        if (A[mid] == x) return mid;

        if (A[mid] < x) left = mid+1;

        else right = mid-1;
    }

    return -1;
}

