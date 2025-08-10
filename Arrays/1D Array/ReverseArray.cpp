#include<iostream>
using namespace std;
void Reverse(int num[],int size)
{
    for(int i=(size-1); i>=0; i--)
    {
        cout<<num[i];
    }
}
int main()
{
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int num[size];
    cout<<"Enter the integers of the arrays: "<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>num[i];
    }
    cout<<"The integers in array is: "<<endl;
    for(int j=0; j<size; j++)
    {
        cout<<num[j];
    }
    cout<<endl;
    cout<<"The reverse of the array is: "<<endl;
    Reverse(num,size);
}