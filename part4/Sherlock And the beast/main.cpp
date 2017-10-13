#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;int answer[2][t];
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        if(n<3)
        {
            answer[0][i]=-1;answer[1][i]=-1;
            continue;
        }
        int r=n%3;
        int j;int a;
        for(j=0;j<=(n/3);j++)
        {
            a=r+(j*3);
            if(a%5==0)
                break;
        }
        if(j==((n/3)+1))
           {
               answer[0][i]=-1;
               answer[1][i]=-1;
               continue;
           }
        answer[0][i]=n-a;
        answer[1][i]=a;
    }
    for(int i=0;i<t;i++)
    {
        if(answer[0][i]==-1&&answer[1][i]==-1)
        {
            cout<<"-1"<<endl;
            continue;
        }
        for(int s=0;s<answer[0][i];s++)
        {
            cout<<"5";
        }
        for(int s=0;s<answer[1][i];s++)
        {
            cout<<"3";
        }
        cout<<endl;
    }

    return 0;
}
