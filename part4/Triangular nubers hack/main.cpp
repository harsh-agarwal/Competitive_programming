#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int answer[t];
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
                if(n%2==1)
                {
                    answer[i]=2;
                    continue;
                }
                else
                {
                    if((n/2)%2==0)
                    {
                        answer[i]=3;
                        continue;
                    }
                    else
                    {
                        answer[i]=4;
                    }
                }
    }

    for(int i=0;i<t;i++)
        cout<<answer[i]<<endl;


    return 0;
}
