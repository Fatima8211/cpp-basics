#include<iostream>
using namespace std;
int main()
{
    int arr[6]={1,2,2,3,2,1};
    for(int i=0; i<6; i++)
    {
        bool check=true;
        for(int j=i+1; j<6; j++)
        {
            if(arr[i]==arr[j])
            {
                check=false;
                break;
            }
        }
        if(check)
        {
            cout<<arr[i];
        }
    }
}


