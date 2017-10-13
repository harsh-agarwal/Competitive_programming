#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long int n;
    cin>>n;
    long long int Ar[n];
    sort(Ar,Ar+n);
    long long int sum=0;
    for(int i=0;i<n;i++)
    cout<<Ar[i]<<" ";
    for(long int i=1;i<=n;i++)
        {
          sum=sum+((Ar[i-1])*i);
        }
    cout<<sum;
    return 0;
}
