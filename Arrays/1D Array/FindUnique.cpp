#include<iostream>
using namespace std;
int main()
{
    int num[6]={1,2,3,2,5,3};

    for(int i=0; i<5; i++)
    {
        bool isUnique=true;
        for(int j=0; j<5; j++)
        {
            if(i!=j && num[i]==num[j])
            {
                isUnique=false;
                break;
            }
        }
        if(isUnique)
        {
            cout<<num[i];
        }
    }
    return 0;
}