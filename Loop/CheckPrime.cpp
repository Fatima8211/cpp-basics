#include <iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter a number: ";
    cin>>N;
    // for(int i=2; i<N-1; i++)
    // {
    //     if(N%i==0)
    //     {
    //         cout<<"Number is not Prime";
    //         break;
    //     }
    //     else
    //     {
    //         cout<<"Number is Prime";
    //         break;
    //     }
    // }
        for(int i=2; i<=N; i++)
    {
        bool isPrime= true;

        for(int j=2; j<i-1; j++)
        {
            if(i%j==0)
            {
                isPrime=false;
                break;
            }
        } 

        if(isPrime)
        {
            cout<<i;
        }
    }
}