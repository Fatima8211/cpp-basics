#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int count=0;

    while(num>0)
    {
        int lastDigit=num%10;
        count++;
        num=num/10;
    }
    cout<<count;
}