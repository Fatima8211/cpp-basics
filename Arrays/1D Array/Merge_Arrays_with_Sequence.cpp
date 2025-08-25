#include<iostream>
using namespace std;
int main()
{
   int odd[] = {1,3,5,7,9,11};
   int even[] = {2,4,6,8,10};
   int oddlength = sizeof(odd)/sizeof(odd[0]);
   int evenlength = sizeof(even)/sizeof(even[0]);
   int maxlength = oddlength + evenlength;
   int num[maxlength];
   cout<<"Before Logic : ";
   for(int i=0;i<=maxlength;i++)
   {
    cout<<i<<",";
   }
   cout<<endl<<"Maxlength: "<<maxlength<<endl;
   int j=0;
   int k=0;
   int n=0;
   for(int i=0;i<=maxlength;i++)
   {
    if(odd[j] == i )
    {
        
        num[n]=odd[j];
        n++;
        j++;
    }
    else if(even[k] == i)
    {
       
       num[n] = even[k];
       n++;
       k++;
    }
   }
   cout<<"After Logic : ";
   for(int i=0;i<maxlength;i++)
   {
    cout<<num[i]<<",";
   }
}