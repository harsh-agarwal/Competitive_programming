#include <iostream>
#include<cmath>
using namespace std;



    int main()
    {

    int c,i;
    cin>>c;
    int f=2*c;
    int *Ar;
    Ar=new int[f];
    for(i=0;i<f;i=i+2)
    cin>>Ar[i]>>Ar[i+1];
    for(i=0;i<f;i=i+2)
        {
          int d=sqrt(Ar[i]);int e=sqrt(Ar[i+1]);
        if(d*d==Ar[i])
        {
            if(e*e==Ar[i+1])
            cout<<fabs(e-d+1)<<endl;
        }
         else
        cout<<fabs(e-d)<<endl;
               }
    delete Ar;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;


}
