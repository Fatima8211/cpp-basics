#include<iostream>
using namespace std;
void Check(int num[], int size)
{
    int even=0, odd=0;
    for(int i=0; i<size; i++)
    {
        if(num[i]%2 == 0 )
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout<<"Total Even numbers is: "<<even<<endl;
    cout<<"Total Odd numbers is: "<<odd;
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
        cout<<num[j];
    }
    cout<<endl;
    Check(num,size);
}