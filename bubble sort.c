#include <stdio.h>

int main()
{
    int i, j, k, n;
    scanf("%d", &n);

    int ara[n], temp[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

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
        if (i > 0)
            printf(" ");

        printf("%d", ara[i]);
    }
    printf("\n");

    return 0;
}
