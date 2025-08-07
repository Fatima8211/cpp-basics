#include<iostream>
using namespace std;
float add(int n1, int n2)
{
    float add=n1+n2;
    return add;
}
float multi(int n1, int n2)
{
    float multi=n1*n2;
    return multi;
}
float sub(int n1, int n2)
{
    float Sub=n1-n2;
    return Sub;
}
float divided(int n1, int n2)
{
    if (n2 == 0) {
        cout << "Cannot divide by zero!" << endl;
        return 0;
    }
    return n1 / n2; 
}
int main()
{
    int n1, n2;
    cout<<"Enter two digits: ";
    cin>>n1;
    cin>>n2;
    cout<<n1<<n2;

    cout << "Addition: " << add(n1, n2) << endl;
    cout << "Subtraction: " << sub(n1, n2) << endl;
    cout << "Multiplication: " << multi(n1, n2) << endl;
    cout << "Division: " << divided(n1, n2) << endl;
}