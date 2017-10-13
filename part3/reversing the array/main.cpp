#include <iostream>

using namespace std;

void reverse(int Ar[],int size)
{
    for(int i=0;i<size/2;i++)
    {
        int temp;
        temp=Ar[i];
        Ar[i]=Ar[size-i-1];
        Ar[size-i-1]=temp;
    }
}

int main()
{
    cout << "Hello world!" << endl;
    cout<<"please enter the number of inputs";
    int n; cin>>n;
    int *Ar;
    Ar=new int[n];
    for(int i=0;i<n;i++)
        cin>>Ar[i];
    reverse(Ar,n);
    for(int i=0;i<n;i++)
        cout<<"\n"<<Ar[i];
    return 0;
}
