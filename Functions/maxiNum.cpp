#include<iostream>
using namespace std;
void Maxi(int n1, int n2, int n3)
{
    if(n1>n2 && n1>n3)
    {
        cout<<n1<<" is maximum";
    }
    if(n2>n1 && n2>n3)
    {
        cout<<n2<<" is maximum";
    }
    else
    {
        cout<<n3<<" is maximum";
    }
}
int main()
{
    int num1, num2, num3;
    cout<<"Enter 3 Number ";
    cin>>num1;
    cin>>num2;
    cin>>num3;
    Maxi(num1,num2,num3);
}