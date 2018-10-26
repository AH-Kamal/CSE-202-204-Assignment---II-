#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <conio.h>
using namespace std;

static int n;

static vector <int> vec;

bool myfunc(int a, int b)
{
    return (a > b);
}
void enter();
void view(vector<int>vec);
void insert_new(vector<int>vec, int insrt, int new_el);
int search_elnt(vector<int>vec, int x);
void delete_elnt(vector<int>vec, int insrt);
void ascending(vector<int>vec);
void descending(vector<int>vec);
void screen_clear();

int main()
{
    int x, insrt, new_el, del_el, position, search_V;
    int input;

    cout<<"Enter size of the array: ";
    cin>>n;
    cout<<"Enter elements of the array: ";
    for (int i = 0; i < n; i++)
	{
		cin >> input;
		vec.push_back(input);
	}



    while (1)
    {
        enter();

        cin>>x;

        if (x == 1)
            view(vec);

        else if (x == 2)
        {
            cout<<"Enter the index number where you want to insert the new element: ";
            cin>>insrt;
            cout<<"Enter which value you want to insert as a new element: ";
            cin>>new_el;

            insert_new(vec, insrt, new_el);
        }


        else if (x == 3)
        {
            cout<<"Enter which value you want to search: ";
            cin>>search_V;

            position = search_elnt(vec, search_V);
            if (position == -1)
                cout<<"This value is not present in your entered array."<<endl;

            else
                cout<<"Your searched value location is in "<<position<<"th index of the array."<<endl;
        }

        else if (x == 4)
        {
            cout<<"Enter the index number where you want to delete the element: ";
            cin>>insrt;

            delete_elnt(vec, insrt);
        }
        else if (x == 5)
            ascending(vec);

        else if (x == 6)
            descending(vec);

        else if (x == 7)
        {
            cout<<"Enter which value's memory location you want to know: ";
            cin>>search_V;

            position = search_elnt(vec, search_V);

            if (position == -1)
                cout<<"This value is not present in your entered array."<<endl;

            else
                cout<<"Memory location of "<<vec[position]<<" is: "<<&vec[position]<<endl;
        }

        else if (x == 0)
            return 0;

        else
            cout<<endl<<"$^^^ Please, enter a valid value (0 to 7). ^^^$"<<endl;

        screen_clear();
    }

    return 0;
}

void enter()
{
    cout<<endl<<"*** Please, enter a value to perform following task: ***"<<endl<<endl;
    cout<<"Enter-"<<endl;
    cout<<"\t"<<"0 to exit: "<<endl;
    cout<<"\t"<<"1 to view all elements: "<<endl;
    cout<<"\t"<<"2 to insert new element: "<<endl;
    cout<<"\t"<<"3 to search an element: "<<endl;
    cout<<"\t"<<"4 to delete an element: "<<endl;
    cout<<"\t"<<"5 to sort elements in ascending order: "<<endl;
    cout<<"\t"<<"6 to sort elements in descending order: "<<endl;
    cout<<"\t"<<"7 to find memory location of an element: "<<endl;

}

void view(vector<int> vec)
{
    cout<<"Your entered array is: ";
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
            cout<<" ";
        cout<<vec[i];
    }

    puts("");

    cout<<endl;
}

void insert_new(vector<int>vec, int insrt, int new_el)
{
    cout<<"Your new element entered array is: ";

    for (int i = n; i > insrt; i--)
    {
        vec[i] = vec[i-1];

    }
    vec[insrt] = new_el;

    ++n;

    for (int i = 0; i < n; i++)
    {
        if (i > 0)
            cout<<" ";
        cout<<vec[i];
    }

    cout<<endl;
}

int search_elnt(vector<int>vec, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (vec[i] == x)
        {
            return i;
            break;
        }
    }

    return -1;
}

void delete_elnt(vector<int>vec, int insrt)
{
    cout<<"your an element deleted array is: ";

    for(int i = insrt; i < n-1; i++)
    {
        vec[i] = vec[i + 1];
    }

    n--;

    for (int i = 0; i < n; i++)
    {
        if (i > 0)
            cout<<" ";
        cout<<vec[i];
    }
    cout<<endl;
}

void ascending(vector<int>vec)
{
    sort(vec.begin(), vec.end());
    cout<<"Your ascending sorted array is: ";

    for (int i = 0; i < n; i++)
    {
        if (i > 0)
            cout<<" ";
        cout<<vec[i];
    }
    cout<<endl;
}
void descending(vector<int>vec)
{
    sort(vec.begin(), vec.end(), myfunc);
    cout<<"Your descending sorted array is: ";

    for (int i = 0; i < n; i++)
    {
        if (i > 0)
            cout<<" ";
        cout<<vec[i];
    }

    cout<<endl;
}

void screen_clear()
{
    getchar();

    cout<<"Press any key to clear screen & then hit enter: ";

    getchar();

    system("cls");    ///works in windows OS
    system("clear"); ///works in Unix OS
}
