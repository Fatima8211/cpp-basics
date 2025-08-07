#include<iostream>
using namespace std;
int main()
{
    float num1, num2, num3;
    cout<<"Enter 1st number: ";
    cin>>num1;
    cout<<"Enter 2nd number: ";
    cin>>num2;
    cout<<"Enter 3r number: ";
    cin>>num3;
    if(num1>num2 && num1>num3)
    {
        cout<<num1<<" is greatest";
    }
    if(num2>num1 && num2>num3)
    {
        cout<<num2<<" is greatest";
    }
    else
    {
        cout<<num3<<" is greatest";
    }
}