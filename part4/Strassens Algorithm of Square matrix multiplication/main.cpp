#include <iostream>

using namespace std;



int main()
{
    cout << "Hello world! please enter the size of the square matrix" << endl;
    int n;
    cin>>n;
    int Ar[n][n];
    cout<<endl<<"please enter the elements in the array";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cin>>Ar[i][j];
    }
    return 0;
}
