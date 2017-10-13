#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int t;int flag=0;
    cin>>t;
    int answer[t];
    for(int i=0;i<t;i++)
    {
        int l,b;int maximum=1*1;
        cin>>l>>b;
        int area=l*b;
        int limit;answer[i]=area;
        if(l<=b)
            limit=l;
        else
            limit=b;
        for(int j=1;j<=limit;j++)
        {
            float t=float(area)/float(j*j);
       // cout<<t<<endl;

            if((int(t)-t)==0)
            {
                if((j*j)>maximum)
                {
                    answer[i]=t;
                    maximum=j*j;
                }

            }
        }
    }
    for(int i=0;i<t;i++)
        cout<<answer[i]<<endl;
        cout<<flag;
    return 0;
}
