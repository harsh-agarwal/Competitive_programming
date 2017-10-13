#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int Ar[5][n];
    for(int i=0;i<n;i++)
        {
          Ar[0][i]=i+1;
          cin>>Ar[1][i];//this line will store the values of Time
          cin>>Ar[2][i];//this line will store the values of processing time
          Ar[3][i]=Ar[1][i]+Ar[2][i];
        }
    int j;
    for(int k=0;k<n;k++)
    {
        int maximum=Ar[3][0];
        //cout<<"harsh";
        for(int i=0;i<n;i++)
        {
          if(Ar[3][i]>=maximum)
          {
              maximum=Ar[3][i];
              j=i;
          }//cout<<"harsh1";

        }
        Ar[4][n-1-k]=Ar[0][j];
        Ar[3][j]=-1;
    }
    for(int i=0;i<n;i++)
        cout<<Ar[4][i]<<" ";
    return 0;
}
