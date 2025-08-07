#include<iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout<<"Enter 1st number: ";
    cin>>num1;
    num3=num1;
    cout<<"Enter 2nd number: ";
    cin>>num2;
    num1=num2;
    num2=num3;
    cout<<"Swaping using 3rd variable is: "<<num1<<" and "<<num2;
}
