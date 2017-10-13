#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int Ar[3][n];unsigned long int answer[2][n];
    for(int i=0;i<n;i++)
    {
        cin>>Ar[2][i];//entry for Pi
        cin>>Ar[1][i];//Entry for Bi
        cin>>Ar[0][i];//entry for Ai

        if(Ar[0][i]<=Ar[1][i])
        {
            answer[0][i]=Ar[0][i];
            answer[1][i]=Ar[1][i];
        }
        else
        {
            answer[0][i]=Ar[1][i];
            answer[1][i]=Ar[0][i];
        }
    }



    return 0;
}
