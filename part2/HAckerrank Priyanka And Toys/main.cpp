#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;

    int n;
    cin>>n;
    int Ar[n];
    for(int i=0;i<n;i++)
        cin>>Ar[i];
    sort(Ar,Ar+n);int sum=0;

    int i=1; int refer=Ar[0];
    while(i<n)//to be thought of
    {

        if(Ar[i]-refer>4)
            {
                sum=sum+1;
                refer=Ar[i];
            }
        i++;

    }
    cout<<sum+1;

    return 0;
}
