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
   long  int Ar[n];

    for(long int i=0;i<n;i++)
        {
        cin>>Ar[i];
        }
    sort(Ar,Ar+n);
    long int minimum=fabs(n-0-Ar[0]);long int max_area=n*Ar[0];
    for(long int i=1;i<n;i++)
        {
        long int sub=fabs(n-i-Ar[i]);
        //cout<<sub<<endl;
        if(sub<minimum)
            {
            minimum=sub;
            max_area=(n-i)*Ar[i];
            }
        }
    cout<<max_area;
    return 0;
}
