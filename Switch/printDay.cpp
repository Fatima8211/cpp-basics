#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    switch (num)
    {
        case 1:
        cout<<"Friday";
        break;
        case 2:
        cout<<"Saturday";
        break;
        case 3:
        cout<<"Sunday";
        break;
        case 4:
        cout<<"Monday";
        break;
        case 5:
        cout<<"Tuesday";
        break;
        case 6:
        cout<<"Wednesday";
        break;
        case 7:
        cout<<"Thurdday";
        break;
        default:
        cout<<"Enter a num between (1 to 7)"<<endl;
        break;
    }
    




}