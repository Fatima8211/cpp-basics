#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter the no. of rows of the arrays: "<<endl;
    cin>>row;

    int col;
    cout<<"Enter the columns of the arrays: "<<endl;
    cin>>col;

    int arr[row][col];

    cout<<"Enter the elements of the array of "<<row<<" by "<<col<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>arr[i][j];
        }
    } 

    cout<<"Elements of the arrays are: "<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    } 
}