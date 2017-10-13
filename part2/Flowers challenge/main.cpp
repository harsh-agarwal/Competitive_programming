#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    cout<<"please enter the value of N";
    int n;
    cin>>n;
    cout<<"please enter the value of k";
    int k;
    cin>>k;
    int Ar[n];
    for(int i=0;i<n;i++)
        cin>>Ar[i];
    int master_sum=0;
    int remainder=n%k;
    sort(Ar,Ar+n);

    for(int i=1;i<=(n/k);i++)
    {
       int sum=0;
       for(int j=1;j<=k;j++)
       {
           sum=sum+Ar[n-j];
       }
       master_sum= master_sum + (i*sum);

    }
    int sum=0;
    for(int i=0;i<remainder;i++)
    {

        sum=sum+Ar[i];

    }
    master_sum= master_sum + ((n/k)+1)* sum;
    cout<<master_sum;
    return 0;
}
