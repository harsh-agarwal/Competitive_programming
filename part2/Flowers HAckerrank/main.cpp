#include<iostream>
#include<algorithm>
using namespace std;
int main()

{
   int N, K;
   cin >> N >> K;
    long int C[N];
   for(int i = 0; i < N; i++)
   {
      cin >> C[i];
   }
   for(int i=0;i<N;i++)
   {
        cout<<C[i]<<endl;
   }

    sort(C,C+N);
   for(int i=0;i<N;i++)
   {
       cout<<C[i]<<endl;
   }
    long int master_sum=0;
    long int remainder=N%K;

     for(int i=1;i<=(N/K);i++)
    {
       long int sum=0;
       for(int j=1;j<=K;j++)
       {
           sum=sum+C[N-((i-1)*k)-j];
       }
       master_sum= master_sum + (i*sum);

    }
   long int sum=0;
    for(int i=0;i<remainder;i++)
    {

        sum=sum+C[i];

    }
    master_sum= master_sum + ((N/K)+1)* sum;
    long int result;
    result=master_sum;

   cout << result << "\n";

   return 0;
}
