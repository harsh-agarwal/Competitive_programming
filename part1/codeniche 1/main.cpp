#include <iostream>
#include<ctype.h>
#include<cmath>

using namespace std;

int main()
{

    cout << "Hello world!" << endl;
    float x;
    cin>>x;
    string Ar;
    cin>>Ar;


    for(int i=0;Ar[i]=='W'||Ar[i]=='L';i++)
    {
        if (Ar[i]=='W')
            x=2*x+11;
        else
            x=ceil(x/2.0);
    }
    cout<<x;

    //cin>>
    return 0;
}
