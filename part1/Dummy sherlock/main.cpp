#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int n;
    cout<<"please enter the size of the main array";
    cin>>n;
    int MainArray[n];
    cout<<endl<<"please enter the Main Array elements";

    for(int i=0;i<n;i++)
        cin>>MainArray[i];
    cout<<"please enter the values of P and Q";
    int p,q;
    cin>>p;
    cin>>q;int difference;int minimum;int answer;

      for(int j=0;j<n;j++)
    {
     for(int i=p;i<=q;i++)
     {
         difference=fabs(MainArray[j]-i);
         if(i==p)
            minimum=difference;
         else
         {
             if(difference<minimum)
                answer=i;
         }

     }

    }

    cout<<"the value of M is"<<answer;

    return 0;
}
