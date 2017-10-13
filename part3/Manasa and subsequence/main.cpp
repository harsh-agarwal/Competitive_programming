#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    long int n;
    cin>>n;
    int Ar[2*100000];
    int b=n;int i=0;
    while(b!=0)
    {
       Ar[i]=b%10;
       b=b/10;
       i++;
    }
    for(int j=0;j<n;j++)


    return 0;
}
