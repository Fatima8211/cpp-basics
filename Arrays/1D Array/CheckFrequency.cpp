#include<iostream>
using namespace std;
void CheckFrequency(int num[], int size)
{
    int element;
    cout<<"Enter the number which frequency you want to check: ";
    cin>>element;
    int count=0;
    bool find=false;
    for(int i=0; i<size; i++)
    {
        if(num[i] == element)
        {
            count++;
            find=true;
        }
    }
    if(find)
    {
        cout<<"Frequency of "<<element<<" in the array is: "<<count;
    }
    else
    {
        cout<<"Number is not found in the array";
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
    CheckFrequency(num,size);
}