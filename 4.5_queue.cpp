#include <bits/stdc++.h>
using namespace std;
#define mx 5

void add();
void _delete();
void display();
char que[mx];
bool IsEmpty();

int front, rear;
queue<char> Q;

int main()
{
    char ch;
    int n;

    while (1)
    {
        printf("\n1 - Insert an element into queue");
        printf("\n2 - Delete an element from queue");
        printf("\n3 - Display queue elements");
        printf("\n4 - Exit");
        printf("\nEnter your choice : ");
        cin>>n;

        if (n == 1) add();
        else if (n == 2) _delete();
        else if (n == 3) display();
        else if (n == 4) break;
        else cout<<"Wrong choice"<<endl;
    }

    return 0;
}

void add()
{
    char ch;
    printf("\nEnter value to be inserted : ");
    cin>>ch;

    if ((rear+1)%mx == front)
    {
        cout<<"Overflow...! No element can be inserted."<<endl;
        return;
    }
    //else if (Q.size() == 0) front = rear = 0;
    else if (IsEmpty()) front = rear = 0;

    else rear = (rear + 1)%mx;

    que[rear] = ch;

    //Q.push(ch);
}

void _delete()
{
    if (IsEmpty()) return;

    else if(front == rear) front = rear = -1;
    
    else front = (front+1)%mx;

    //Q.pop();
}

void display()
{
    if ((front == -1) && (rear == -1))
    {
        printf("\nQueue is empty");
        return;
    }

    for (; front <= rear; front++)
        printf("%c ", que[front]);

    cout<<endl;

    front = 0;
}

bool IsEmpty()
{
    int cnt = 0;
    for (int i = 0; i < 5; i++)
        if(isalpha(que[i])) cnt++;

    if (cnt == 0) return true;

    return false;
}
