#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int number_of_swaps;
    cin>>number_of_swaps;
    int Ar[2][n];int A[2][n];
    for(int i=0;i<n;i++)
        {
            cin>>Ar[1][i];
            Ar[0][i]=i;
            A[1][i]=Ar[1][i];
            A[0][i]=i;
        }
    cout<<endl<<Ar[1][2];

    int j=0;int k=0;
    while(k<n)
        {
            int maximum=A[1][k];
            for(int i=(k+1);i<n;i++)
            {
                if(A[1][i]>maximum)
                {
                    maximum=A[1][i];
                    j=i;
                }
            }
            //swapping
            int temp;
            temp=A[0][k];
            A[0][k]=j;
            A[0][j]=temp;
            k++;

            int temp1;
            temp1=A[1][k];
            A[1][k]=A[1][j];
            A[1][j]=temp1;
        }


    for(int i=0;i<number_of_swaps;i++)
    {
       int r=A[0][i];
       int temp;
       temp=Ar[1][r];
       Ar[1][r]=Ar[1][i];
       Ar[1][i]=temp;
    }

    for(int i=0;i<n;i++)
    {
        cout<<Ar[i];
    }

    return 0;
}
