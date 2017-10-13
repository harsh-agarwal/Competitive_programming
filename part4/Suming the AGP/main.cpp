#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    cout<<"please enter the value of a";
    long long int a;
    cin>>a;
    cout<<endl<<"please enter the value of d";
    long int d;
    cin>>d;
    cout<<endl<<"please enter the value of r";
     long int r;
    cin>>r;
    cout<<endl<<"please enter the value of n";
    long long int n;
    cin>>n;
    cout<<endl<<"please enter the value of mod";
    long long int mod;
    cin>>mod;
    long long int sum=0;int h=1; int master_term;int k;
    for(int i=1;i<=(n+1);i++)
    {
        k=a+(i-1)*d;
        h=h*r;
        if(i==1) h=h/r;
        long long int term1=k%mod;
        long long int term2=h%mod;
        long long int term=term1*term2;
        master_term=term%mod;
        sum=sum+master_term;
    }
    long long int answer=sum%mod;
    cout<<endl<<answer;



    return 0;
}
