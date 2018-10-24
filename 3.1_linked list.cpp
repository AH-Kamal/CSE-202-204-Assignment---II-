#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *link;
};

struct Node *head;
void screen_clear();

void print()
{
    cout<<"\nYour linked list : ";
    struct Node *temp;

    temp = head;

    while (temp != NULL)
    {
        cout<<temp->data<<"  ";
        temp = temp->link;
    }
    cout<<endl;
}

void insert()
{
    int value;
    cout<<"\nEnter which value U want to insert : ";
    cin>>value;
     struct Node *temp = (struct Node*) malloc(sizeof(struct Node));
     temp->data = value;
     temp->link = NULL;
     if (head == NULL) head = temp;

     else
     {
         struct Node *t;
         t = head;

         while (t->link != NULL)
         {
             t = t->link;
         }
         t->link = temp;
     }

}

void insert_first()
{
    int value;
    cout<<"\nEnter which value U want to insert first : ";
    cin>>value;

    struct Node *temp = (struct Node*) malloc(sizeof (struct Node));
    temp->data = value;
    temp->link = head;
    head = temp;
}

void delete_item()
{
    int position;
    cout<<"\nEnter which position value U want to delete : ";
    cin>>position;

    if (position == 1)
    {
        struct Node *temp;
        temp = head;
        head = head->link;
        free(temp);
    }

    else
    {
        struct Node *temp1;
        temp1 = head;
        for (int i = 1; i <= position-2; i++)
        {
            temp1 = temp1->link;
        }
        struct Node *temp2;
        temp2 = temp1->link;
        temp1->link = temp2->link;
        free(temp2);
    }
}
int main()
{
    head = NULL;

    int choice;

    while (1)
    {
        printf("Enter-\n");
        printf("0 - to exit\n1 - to insert item at last\n2 - to insert item at first\n");
        printf("3 - to delete an item(u want)\n4 - to display linked list\n");
        scanf("%d", &choice);

        if (choice == -1) break;

        switch(choice)
        {
            case 1: insert();
                    break;
            case 2: insert_first();
                    break;
            case 3: delete_item();
                    break;
            case 4: print();
                    break;

            default: cout<<"Wrong choice"<<endl;
                    break;
        }
        screen_clear();
    }


    return 0;
}

void screen_clear()
{
    getchar();

    printf("Press any key to clear screen & then hit enter: ");

    getchar();

    system("cls"); /*works in windows OS*/
    //system("clear"); /*works in Unix OS*/
}
