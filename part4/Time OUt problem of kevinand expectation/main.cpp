#include <iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int todo(float Ar[][2],int p,int r)
{
    int i=p-1;
    float x=Ar[r][1];
    for(int j=p;j<r;j++)
    {
        if(Ar[j][1]<=x)
        {
            i=i+1;
            float temp=Ar[j][1];
                Ar[j][1]=Ar[i][1];
                Ar[i][1]=temp;
            float temp1=Ar[j][0];
                Ar[j][0]=Ar[i][0];
                Ar[i][0]=temp1;
        }
    }
    float temp=Ar[i+1][1];
    Ar[i+1][1]=Ar[r][1];
    Ar[r][1]=temp;
    float temp1=Ar[i+1][0];
    Ar[i+1][0]=Ar[r][0];
    Ar[r][0]=temp1;
    return(i+1);
}

int todo1(float Ar[][2],int p,int r)
{
    int i=p-1;
    float x=Ar[r][0];
    for(int j=p;j<r;j++)
    {
        if(Ar[j][0]<=x)
        {
            i=i+1;
            float temp=Ar[j][1];
                Ar[j][1]=Ar[i][1];
                Ar[i][1]=temp;
            float temp1=Ar[j][0];
                Ar[j][0]=Ar[i][0];
                Ar[i][0]=temp1;
        }
    }
    float temp=Ar[i+1][1];
    Ar[i+1][1]=Ar[r][1];
    Ar[r][1]=temp;
    float temp1=Ar[i+1][0];
    Ar[i+1][0]=Ar[r][0];
    Ar[r][0]=temp1;
    return(i+1);
}

void quickSort1(float Ar[][2],int p,int r)
{
    if(p>=r)return;
    int q=todo1(Ar,p,r);
        quickSort1(Ar,p,q-1);
        quickSort1(Ar,q+1,r);
}



void quickSort(float Ar[][2],int p,int r)
{
    if(p>=r)return;
    int q=todo(Ar,p,r);
        quickSort(Ar,p,q-1);
        quickSort(Ar,q+1,r);
}

int main()
{
    int t;
    //cout<<"please enter the number of test cases";
    cin>>t;
    float output[t][2];
    float input[t][2];
    for(int i=0;i<t;i++)
    {
        input[i][0]=i;
        //input[i][1]=10000000000000000;
        cin>>input[i][1];

    }
    quickSort(input,0,t-1);
    /*for(int i=0;i<t;i++)
    {
        cout<<input[i][0]<<" "<<input[i][1]<<endl;
    }*/

    float sum=0;
    for(int k=0;k<t;k++)
    {
        float n=input[k][1];
        output[k][0]=input[k][0];
        if(n==1)
        {
            output[1][k]=0;
            continue;
        }
        float s,f,x,a;
        if(k==0)
        {
            for(float i=0;i<n;i++)
            {
                x=i,s=1;
                a=sqrt(x+sqrt(x));
                while(s>0.0001)
                {
                    f=a;a=sqrt(x+a);
                    s=a-f;
                }
                sum=sum+a;
            }
        output[k][1]=sum/n;
        }
        else
        {
            for(float i=input[k-1][1];i<n;i++)
            {
                x=i,s=1;
                a=sqrt(x+sqrt(x));
                while(s>0.0001)
                {
                    f=a;a=sqrt(x+a);
                    s=a-f;
                }
                sum=sum+a;
            }
        output[k][1]=sum/n;

        }

    }

    quickSort1(output,0,t-1);


    for(int w=0;w<t;w++)
    {
        //cout<<output[w][0]<<" ";
        printf("%.30lf",output[w][1]);
        printf("\n");
    }




    return 0;
}
