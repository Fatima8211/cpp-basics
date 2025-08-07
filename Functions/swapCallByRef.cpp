#include<iostream>
using namespace std;
//Swap Using Refernce
void SwapRef(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void SwapByPointer(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}   
int main()
{
    int a=4, b=5;

    //Swap Using Refernce
    SwapRef(a,b);
    cout<<"After Swaping value of a is: "<<a<<endl;
    cout<<"After Swaping value of b is: "<<b<<endl;

    //Swap By Refernce Using Pointers
    SwapByPointer(&a, &b);
    cout<<"After Swaping value of a is: "<<a<<endl;
    cout<<"After Swaping value of b is: "<<b<<endl;

    return 0;
}