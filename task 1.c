#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

static int n;

static int* value;

void enter();
void view(int value[]);
void insert_new(int value[], int insrt, int new_el);
int search_elnt(int A[], int x);
void delete_elnt(int value[], int insrt);
void ascending(int A[]);
void descending(int A[]);
void screen_clear();

int main()
{
    int x, i, insrt, new_el, del_el, position, search_V;

    printf("Enter size of the array: ");
    scanf("%d", &n);

     value = (int *)malloc(sizeof(int) * n); /*allocating memory*/

    printf("Enter elements of the array: ");

    for (i = 0; i < n; i++)
        scanf("%d", &value[i]);


    while (1)
    {
        enter();

        scanf("%d", &x);

        if (x == 1)
            view(value);

        else if (x == 2)
        {
            printf("Enter the index number where you want to insert the new element: ");
            scanf("%d", &insrt);
            printf("Enter which value you want to insert as a new element: ");
            scanf("%d", &new_el);
            insert_new(value, insrt, new_el);
        }


        else if (x == 3)
        {
            printf("Enter which value you want to search: ");
            scanf("%d", &search_V);

            position = search_elnt(value, search_V);
            if (position == -1)
                printf("This value is not present in your entered array.\n");

            else
                printf("Your searched value location is in %dth index of the array.\n", position);
        }

        else if (x == 4)
        {
            printf("Enter the index number where you want to delete the element: ");
            scanf("%d", &insrt);

            delete_elnt(value, insrt);
        }
        else if (x == 5)
            ascending(value);

        else if (x == 6)
            descending(value);

        else if (x == 7)
        {
            printf("Enter which value's memory location you want to know: ");
            scanf("%d", &search_V);

            position = search_elnt(value, search_V);

            if (position == -1)
                printf("This value is not present in your entered array.\n");

            else
                printf("Memory location of %d is: %p\n", value[position], &value[position]);
        }

        else if (x == 0)
            return 0;

        else
            printf("$^^^ Please, enter a valid value (0 to 7). ^^^$\n");

        screen_clear();
    }

    return 0;
}

void enter()
{
    printf("\n*** Please, enter a value to perform following task: ***\n\n");
    printf("Enter-\n");
    printf("\t0 to exit: \n");
    printf("\t1 to view all elements: \n");
    printf("\t2 to insert new element: \n");
    printf("\t3 to search an element: \n");
    printf("\t4 to delete an element: \n");
    printf("\t5 to sort elements in ascending order: \n");
    printf("\t6 to sort elements in descending order: \n");
    printf("\t7 to find memory location of an element: \n");

}

void view(int value[])
{
    int i;
    printf("Your entered array is: ");
    for (i = 0; i < n; i++)
    {
        if (i > 0)
            printf(" ");
        printf("%d", value[i]);
    }

    printf("\n");
}

void insert_new(int value[], int insrt, int new_el)
{
    int i;
    printf("New element entered array is: ");

    for (i = n; i > insrt; i--)
    {
        value[i] = value[i-1];

    }
    value[insrt] = new_el;

    ++n;

    for (i = 0; i < n; i++)
    {
        if (i > 0)
            printf(" ");
        printf("%d", value[i]);
    }

    printf("\n");
}

int search_elnt(int A[], int x)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (A[i] == x)
        {
            return i;
            break;
        }
    }

    return -1;
}

void delete_elnt(int value[], int insrt)
{
    int i;
    printf("An element deleted array is: ");

    for(i = insrt; i < n-1; i++)
    {
        value[i] = value[i + 1];
    }

    n--;

    for (i = 0; i < n; i++)
    {
        if (i > 0)
            printf(" ");
        printf("%d", value[i]);
    }

    printf("\n");
}

void ascending(int A[])
{
    int i, j, item;

    for (i = 1; i < n; i++)
    {
        item = A[i];

        j = i - 1;

        while (j >= 0 && A[j] > item)
        {
            A[j+1] = A[j];
            j = j - 1;
        }

        A[j+1] = item;
    }

    printf("Array in ascending order: ");

    for (i = 0; i < n; i++)
    {
        if (i > 0)
            printf(" ");
        printf("%d", value[i]);
    }

    printf("\n");
}
void descending(int A[])
{
    int i, j, item;

    for (i = 1; i < n; i++)
    {
        item = A[i];

        j = i - 1;

        while (j >= 0 && A[j] < item)
        {
            A[j+1] = A[j];
            j = j - 1;
        }

        A[j+1] = item;
    }

    printf("Array in descending order: ");

    for (i = 0; i < n; i++)
    {
        if (i > 0)
            printf(" ");
        printf("%d", value[i]);
    }

    printf("\n");
}

void screen_clear()
{
    getchar();

    printf("Press any key to clear screen & then hit enter: ");

    getchar();

    system("cls"); /*works in windows OS*/
    system("clear"); /*works in Unix OS*/
}

