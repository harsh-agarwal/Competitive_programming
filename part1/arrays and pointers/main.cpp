#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int *Ar;
    cout<<"how many elements you want to enter";
    int n,i;
    cin>>n;
    Ar=new int[n];
    cout<<"please enter the elements";
    for(i=0;i<n;i++)
    {
      cin>>Ar[i];
    }
    cout<<"\n the elements are";

    while(i>1)
    {
        if(i!=1)
            cout<<Ar[n-i]<<",";
         i--;
    }
    cout<<Ar[n-1];
    delete Ar;
    return 0;
}
