#include <iostream>

using namespace std;

int MaxSubArray(int Ar[],int high,int low)
{

    int c=(high-low)+1;
    int number=(c*(c-1))/2;
    int values[number];

    int sum=0;
    for(int n=2;n<c;n++)
        for(int i=low;i<low+n;i++)
    {
        sum=sum+Ar[i];
        for(int j=0;j<number;j++)
            values[j]=sum;
    }
    sort(values,values+number);
    return(values[number]);

}
int MaxSubArrayCrossMid(int Ar[],int low,int high)
{
    mid=(low+high)/2;
    int maxleft,maxright,leftsum=-10000,rightsum=-10000;
    int sum=0;
    for(int i=mid;i>=low;i--)
        {
            sum=sum+Ar[i];
            if(sum>leftsum)
            {
                leftsum=sum;
                maxleft=i;
            }
        }
    sum=0;
    for(int i=mid+1;i<=high;i++)
    {
        sum=Ar[i]+sum;
        if(sum>rightsum)
        {
            rightsum=sum;
            maxright=i;
        }
    }
sum=leftsum+rightsum;

return(sum);

}
int main()
{
    cout << "Hello world!" << endl;
    int Ar[10];
    for(int i=0;i<10;i++)
        cin>>Ar[i];
    while(low<high)
    {
        mid=(high+low)/2;

    }
    return 0;
}
