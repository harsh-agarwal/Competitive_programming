#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int todo(int Ar[][3],int p,int r)
{
    int x;int i=p-1;
    x=Ar[r][0];
    for(int j=p;j<r;j++)
    {
        if(Ar[j][0]<=x)
            {
                i=i+1;
                int temp=Ar[j][0];
                Ar[j][0]=Ar[i][0];
                Ar[i][0]=temp;

                temp=Ar[j][1];
                Ar[j][1]=Ar[i][1];
                Ar[i][1]=temp;

                 temp=Ar[j][2];
                Ar[j][2]=Ar[i][2];
                Ar[i][2]=temp;
            }
    }
    int temp=Ar[i+1][0];
    Ar[i+1][0]=Ar[r][0];
    Ar[r][0]=temp;

     temp=Ar[i+1][1];
    Ar[i+1][1]=Ar[r][1];
    Ar[r][1]=temp;

     temp=Ar[i+1][2];
    Ar[i+1][2]=Ar[r][2];
    Ar[r][2]=temp;
    return(i+1);
}
void quickSort(int Ar[][3],int p,int r)
{

    if(p>=r)return;
    int q=todo(Ar,p,r);

        quickSort(Ar,p,q-1);
        quickSort(Ar,q+1,r);
}



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int m;
    cin>>m;
    int operation_values[m][3];
    for(int i=0;i<m;i++)
    {
        cin>>operation_values[i][0];
        cin>>operation_values[i][1];
        cin>>operation_values[i][2];
    }

    quickSort(operation_values,0,m-1);
    vector<int> values_of_sum_possible;
    values_of_sum_possible.push_back(operation_values[m-1][2]);

    for(int i=m-2;i>=0;i--)
    {
        values_of_sum_possible.push_back(operation_values[i][2]);
        if((operation_values[i+1][0])<=(operation_values[i][1]))
        {
            values_of_sum_possible.push_back(operation_values[i][2]+operation_values[i+1][2]);
        }

    }
    unsigned int x=values_of_sum_possible.size();
    sort(values_of_sum_possible.begin(),values_of_sum_possible.begin()+x);
    cout<<values_of_sum_possible.at(x-1);

    return 0;
}
