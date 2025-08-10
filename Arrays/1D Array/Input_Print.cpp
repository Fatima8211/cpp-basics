#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter size of array: ";
    int num[size];
    cout<<"Enter the integers of the arrays: "<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>num[i];
    }
    cout<<"The integers in array is: "<<endl;
    for(int j=0; j<size; j++)
    {
        cout<<num[j]<<endl;
    }
}