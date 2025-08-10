#include<iostream>
using namespace std;
void SecondMax(int num[], int size)
{
    int max=num[0];
    int maxIndex=0;
    for(int i=1; i<size; i++)
    {
        if(max<num[i])
        {
            max=num[i];
            maxIndex=i;
        }
        else
        {
            continue;
        }
    }

    int secMax=num[0];
    for(int i=1; i<size; i++)
    {
        if(num[i] != num[maxIndex])
        {
            if(num[i]>secMax)
            {
                secMax=num[i];
            }
        }
    }
    cout<<"Second maximum number without Sorting is: "<<secMax;
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
   SecondMax(num,size);
}