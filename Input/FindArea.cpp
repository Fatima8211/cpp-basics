#include<iostream>
using namespace std;
int main()
{
    float l, w, AreaOfRectangle, AreaOfSquare;
    string shape;
    cout<<"Enter Shape: ";
    cin>>shape;
    if(shape=="Rectangle")
    {
    cout<<"Enter length: "<<endl;
    cin>>l;
    cout<<"Enter Width: "<<endl;
    cin>>w;
    AreaOfRectangle=l*w;
    cout<<"Area of Rectangle is: "<<AreaOfRectangle;
    }
    if(shape=="Square")
    {
    cout<<"Enter length: "<<endl;
    cin>>l; 
    AreaOfSquare=l*l*l*l;
    cout<<"Area of Square is: "<<AreaOfSquare;
    }
}
