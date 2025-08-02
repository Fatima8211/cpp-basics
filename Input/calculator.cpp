#include<iostream>
using namespace std;
int main()
{
    int num1, num2; char s;
    cout<<"Enter 1st number"<<endl;
    cin>>num1;
    cout<<"Enter 2nd number"<<endl;
    cin>>num2;
    cout<<"Enter a character";
    cin>>s;
     if(s=='+')
    {
       int Sum=num1+num2;
       cout<<"Sum is: "<<Sum;
    }
     if(s=='-')
    {
      int diff=num1-num2;
      cout<<"Difference is: "<<diff;
    }
     if(s=='*')
    {
       int Mul=num1*num2;
       cout<<"Multiply is: "<<Mul;
    }
     if(s=='/')
    {
       int Div=num1/num2;
       cout<<"Divided is: "<<Div;
    }
}