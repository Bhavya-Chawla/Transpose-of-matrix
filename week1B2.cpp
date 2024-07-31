# include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the order: ";
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];

        }

    }
    int transpose[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            transpose[i][j]=arr[j][i];

    }
    cout<<"Transpose of the matrix is: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<transpose[i][j]<<" ";
        cout<<endl;
    }
}
