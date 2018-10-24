#include <bits/stdc++.h>
using namespace std;

int binary_search(int A[], int N, int x);
void screen_clear();

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

        if (position < 0) 
            printf("\nYour searched element is not present in the DATA. Try again...\n\n");

        else   
            printf("\nYour searched element is in %dth position of the DATA.\n\n", position+1);
        
        screen_clear();
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

void screen_clear()
{
    getchar();

    printf("Press any key to clear screen & then hit enter: ");

    getchar();

    system("cls"); /*works in windows OS*/
    system("clear"); /*works in Unix OS*/
}
