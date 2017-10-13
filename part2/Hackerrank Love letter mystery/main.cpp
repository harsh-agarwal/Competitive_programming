#include <iostream>
#include<string.h>
#include<math.h>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int t;
    cin>>t;int answer[t];
    for(int j=0;j<t;j++)
    {
        char Harsh[10000];
        cin>>Harsh;

        int n;
        n=strlen(Harsh);int sum=0
        for(int i=0;i<(n/2);i++)
        {


                sum=sum+fabs(int(Harsh[n-1-i])-int(Harsh[i]));



        }
        answer[j]=sum;

    }

    for(int i=0;i<n;i++)
    cout<<answer[i]<<endl;

    return 0;
}
