#include<iostream>
using namespace std;
void Maxi(int num[], int size)
{
    int maxi=num[0];
    int maxIndex=0;
    for(int i=1; i<size; i++)
    {
        if(maxi<num[i])
        {
            maxi=num[i];
            maxIndex=i;
        }
        else
        {
            continue;
        }
    }
    cout<<"The maximum is: "<<maxi<<endl;
    cout<<"Maximum at index "<<maxIndex;
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
   Maxi(num,size);
}