#include <iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int check(int x,int Ar[],int n)
{
    int j=0;int flag=0;
    while(flag==0)
    {
        int sub_sum=0;
        while(sub_sum<=x)
    {
        if(j>=n)break;
        sub_sum=sub_sum+Ar[j];
        j++;
        if(sub_sum==x)break;
        if(sub_sum>x)flag=1;
    }
    if(j>=n)break;
    }
    return(!flag);

}
int main()
{
   long int n;
   cin>>n;
    vector<int> answer;
    int Ar[n];int long long sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>Ar[i];
        sum=sum+Ar[i];

    }
    int d;
    d=sqrt(sum);long int x;
    if(d*d==sum)
    {
        for(int i=1;i<=(d);i++)
    {
        if(sum%i!=0)
        continue;
        long int x=i;
        if(check(x,Ar,n)==1)
            answer.push_back(x);
        if(i==d)break;
        x=sum/i;
        if(check(x,Ar,n)==1)
            answer.push_back(x);
    }
    }
      else
    {for(int i=1;i<=d;i++)
    {
        if(sum%i!=0)
        continue;
        long int x=i;
        if(check(x,Ar,n)==1)
            answer.push_back(x);
        x=sum/i;
        if(check(x,Ar,n)==1)
            answer.push_back(x);
    }}
    sort(answer.begin(),answer.end());
    for(unsigned int i=0;i<answer.size();i++)
        cout<<answer.at(i)<<" ";
    return 0;
}
