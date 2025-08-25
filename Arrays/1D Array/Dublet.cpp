#include<iostream>
using namespace std;
int main()
{
   int arr[4]={3,1,2,4}, target=3;
   for(int i=0; i<4; i++)
   {
    for(int j=i+1; j<4; j++)
    {
        if(arr[i]+arr[j]==3)
        {
            cout<<"i = "<<i<<" and j = "<<j;
            break;
        }
    }
   }
}