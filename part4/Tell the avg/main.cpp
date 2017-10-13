#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    long int n;
   // cout<<"please enter the number of elements that are going to be entered";
    cin>>n;
    long long int Ar[n];
    for(int i=0;i<n;i++)
        {
          cin>>Ar[i];
          //cout<<Ar[i];
        }
    long int m=1000000007;
    long long int a=Ar[0];
    for(int i=1;i<n;i++)
    {
        //long long int a=Ar[0]%m;
        long long int b=Ar[i]%m;
        a=((a%m)+(b)+(((a%m)*b)%m))%m;
        //cout<<Ar[0]<<endl;
    }
    //long long int answer=Ar[0]%(1000000007);
    cout<<a;
    return 0;
}
