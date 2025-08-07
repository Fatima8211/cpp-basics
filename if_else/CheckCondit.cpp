#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a Number: ";
    cin>>num;
    if(num==0)
    {
        cout<<"Number is zero";
    }
    if(num>0)
    {
        cout<<"Number is positive";
    }
    if(num<0)
    {
        cout<<"Number is negative";
    }
}