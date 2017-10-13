#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int answer[t];
    int input[t];
    for(int i=0;i<t;i++)
    {

        int s;
        cin>>s;
        input[i]=s;
        int master_sum=(2*s)%(1000000007);
        int a=(2*s)/42;//int b=1;
        while(a>=1)
        {


            master_sum=master_sum+((2*a)%10000000007);
            a=(a*2)/42;
        }
        answer[i]=master_sum;

    }
    for(int i=0;i<t;i++)
    {
        cout<<input[i]<<" "<<answer[i]<<endl;
    }
    return 0;
}
