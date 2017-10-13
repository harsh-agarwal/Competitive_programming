#include <iostream>

using namespace std;

int CrossOver(int Ar[],int start,int mid,int khatam,int m)
{
    int n=khatam-start+1;
    int sum=0;
    int maximum=-1;
    int remainder;
    for(int i=mid;i>=0;i--)
    {
        for(int k=i;k<=mid;k++)
            sum=Ar[k]+sum;
        for(int j=mid+1;j<n;j++)
        {
            sum=sum+Ar[j];
            remainder=sum%m;
            if(remainder>maximum)
            maximum=remainder;
        }
    }

    return(maximum);
}



int MaximumSubArray(int Ar[],int start,int khatam,int m)
{
    int mid;int left_modulus;int right_modulus;int cross_modulus;
    if(start==khatam)
        return(Ar[start]%m);

    else

    {
        mid=(start+khatam)/2;
        left_modulus=MaximumSubArray(Ar,start,mid,m);
        right_modulus=MaximumSubArray(Ar,mid+1,khatam,m);
        cross_modulus=CrossOver(Ar,start,mid,khatam,m);
        if((left_modulus>right_modulus)&&(left_modulus>cross_modulus))
            return(left_modulus);
        else
        {
            if((right_modulus>left_modulus)&&((right_modulus)>cross_modulus))
                return(right_modulus);
            else
                return(cross_modulus);
        }
    }


}

int main()
{
    cout << "Hello world!" << endl;
    int t;
    cin>>t;
    int answer[t];
    for(int i=0;i<t;i++)
    {
        int n,m;
        cin>>n>>m;
        int Ar[n];
        for(int j=0;j<n;j++)
        {
            cin>>Ar[j];
        }
       answer[i]=MaximumSubArray(Ar,0,n-1,m);
    }
    for(int i=0;i<t;i++)
        cout<<answer[i]<<endl;

    return 0;
}
