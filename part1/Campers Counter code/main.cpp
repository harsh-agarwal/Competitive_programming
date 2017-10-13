#include <iostream>

#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    long int n;
    cin>>n;
    long int k;
    cin>>k;
    long int Ar[k];
    for(long int i=0;i<k;i++)
    {
        cin>>Ar[i];
    }
    sort(Ar,Ar+k);
    //int number_of_players=Ar[0]/2;
   long int all_players[2][n];
   for(long int i=0;i<n;i++)
    {
       all_players[0][i]=i+1;
       all_players[1][i]=2;
    }
    //cout<<":harsh";
    for(long int i=0;i<k;i++ )
    {
        all_players[1][((Ar[i])-1)]=1;
        all_players[1][((Ar[i])-2)]=0;
        all_players[1][(Ar[i])]=0;
    }
    //cout<<"harsh2";
    int number_of_players=0;

    long int j=0;
    //cout<<"Harsh1"<<endl;

    while(j<n)
        {
            long int sum=0;
            //cout<<j<<endl;
            while(all_players[1][j]==2)
            {
            sum++;
            j++;
           // cout<<j<<endl;
            if(j>=n)break;
            }
            if(sum%2==0)
            {
                sum=sum/2;
            }
            else
            {
                sum=(sum/2)+1;
            }
            number_of_players=number_of_players+sum;
            while(all_players[1][j]!=2)
            {
                j++;
                //cout<<j<<endl;
                if(j>=n)break;
            }
        }
        cout<<endl;
        cout<<(number_of_players+k);

    return 0;
}
