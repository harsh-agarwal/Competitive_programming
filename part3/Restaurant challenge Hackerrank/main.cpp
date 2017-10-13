#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int t;
    cin>>t;int answer[t];
    for(int j=0;j<t;j++)
    {
        int l;
        int b;
        cin>>l;
        cin>>b;
        int area=l*b;int maximum=0;
        for(int i=1;i<=sqrt(area);i++)
        {
           if(area%(i*i)==0)
           {
               if(i>maximum)
               {
                   //int count=area/(i*i);
                   maximum=i;
               }

           }
           else
            continue;
        }

        answer[j]=area/(maximum*maximum);
    }

    for(int j=0;j<t;j++)
        cout<<answer[j]<<endl;
    return 0;
}
