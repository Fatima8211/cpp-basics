#include<iostream>
using namespace std;
int main()
{
    int table, multi;
    cout<<"Enter Table num: ";
    cin>>table;

    for(int i=1; i<=10; i++)
    {
        multi = table*i;
        cout<<table<<" * "<<i<<" = "<<multi<<endl;
    }
}