#include<iostream>
using namespace std;
void MaxAndMin(int num[], int size)
{
    int max=num[0];  int min=num[0];
    int maxIndex=0;  int minIndex=0;

    for(int i=1; i<size; i++)
    {
        if(max<num[i])
        {
            max=num[i];
            maxIndex=i;
        }
        if(min>num[i])
       {
        min=num[i];
        minIndex=i;
       }
    }
    cout<<"The maximum is: "<<max<<" at index "<<maxIndex<<endl;
    cout<<"The minimun is: "<<min<<" at index "<<minIndex<<endl;
   
    cout<<"Array before swapping min and max: ";
    for(int i=0; i<size; i++)
    {
        cout<<num[i];
    }
    cout<<endl;
    swap(num[minIndex],num[maxIndex]);
    cout<<"Array after swapping min and max: ";
    for(int i=0; i<size; i++)
    {
        cout<<num[i];
    }
    cout<<endl;
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
   MaxAndMin(num,size);
}