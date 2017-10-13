#include <iostream>

using namespace std;


int SquareMatrix(int A[10][],int B[10][],int capacity,int start,int finish )
{

    int n=capacity;
    int C[n][n];
    if (n==1)
    C[1][1]= A[1][1]*B[1][1];
    int mid=(start+finish)/2;
    else
        {
        for(i=start;i<mid;i++)
            {
                for(int j=start;j<mid;j++)
                    C[1][1]=SquareMatrix(A,B,n/2,start,mid)+SquareMatrix(A,B,n/2,mid,);
            }


}
int main()
{
    cout<<"enter the dimensions of the matrices to be multiplied";
    int n;
    cin>>n;
    matrix A(n,n);
    matrix B(n,n);

}
