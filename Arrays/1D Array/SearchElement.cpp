#include<iostream>
using namespace std;
void Search(int num[], int size)
{
    int searchElement;
    cout<<"Enter the element which you want to search exists or not: ";
    cin>>searchElement;
    bool found=false;
    for(int i=0; i<size; i++)
    {
        if(num[i] == searchElement)
        {
            cout<<"Element is exist in array at index "<<i<<endl;
            found=true;
        }
    }
    if(!found)
    {
        cout<<"Element is not found in array";
    }
}
int main()
{
    int size;
    cout<<"Enter the size of array: ";
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
        cout<<num[j]<<" ";
    }
    cout<<endl;
    Search(num,size);
}