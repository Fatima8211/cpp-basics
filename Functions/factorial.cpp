#include<iostream>
using namespace std;
void factorial(int num)
{
     int facto=1;

    for(int i=num; i>=1; i--)
    {
        facto *= i;
    }
    cout<<facto;
}
int main()
{
    int num;
    cout<<"Enter a num: ";
    cin>>num;
    factorial(num);
}