#include <iostream>

using namespace std;

int main()
{

    int t;
    cin>>t;
    int answer[t];
    for(int i=0;i<t;i++)
    {
        int n,c,m;
        cin>>n>>c>>m;

        int sum=0;


        int first=n/c;
        sum=sum+first;
        int no_of_wrappers=first;
        while(no_of_wrappers>m)
        {
           int more_chocolates=no_of_wrappers/m;
           sum=sum+more_chocolates;
           int left=no_of_wrappers-(m*more_chocolates);
           no_of_wrappers=left;
        }
        answer[i]=sum;


    }

    for(int i=0;i<t;i++)
        cout<<answer[i]<<endl;
    return 0;
}
