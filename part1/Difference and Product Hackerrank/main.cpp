#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int t;
    cin>>t;
    int answer[t];
    for(int i=0;i<t;i++)
    {
        cout<<"please enter the value of D and P";
        int D,P;
        cin>>D>>P;
        if(D==0&&P==0)
        {
            answer[i]=1;
            continue;
        }
        if((d==0)&&(p>0))
        {
            answer[i]=2;
            continue;
        }
        if(D<0)
        {
            answer[i]=0;
            continue;
        }
        int C=(D*D)+(4*P);
        if(C>0)
        {
            answer[i]=4;
            continue;
        }
        if(C<0)
        {
            answer[i]=0;
            continue;
        }
        if(C=0)
        {
            answer[i]=2;
            continue;
        }
    }

    for(int i=0;i<t;i++)
    {
        cout<<answer[i]<<endl;
    }
    return 0;
}
