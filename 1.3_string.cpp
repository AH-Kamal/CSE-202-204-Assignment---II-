#include<bits/stdc++.h>
using namespace std;


int main()
{
    string T= "THE STUDENT IS ILL";
    string input;

    cout<<"Enter 'VERY ILL' or 'ILL TODAY' or 'VERY ILL TODAY' to view the changes:\n";

    getline(cin, input);

    cout<<T.replace(15, input.size(), input)<<endl;;


    return 0;
}
