#include<iostream>
using namespace std;
int main()
{
    int arr1[6]={2,3,4,5,6,7};
    int arr2[4]={6,7,8,9};

    for(int i=0; i<6; i++)
    {
        bool Intersection=true;

        for(int j=0; j<4; j++)
        {
            if(arr1[i] == arr2[j])
            {
                Intersection=false;
                break;
            }
        }
        if(!Intersection)
        {
            cout<<arr1[i];
        }
    }
    return 0;
}