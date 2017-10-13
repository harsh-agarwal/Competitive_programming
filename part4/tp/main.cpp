#include<iostream>
#include<algorithm>
using namespace std;
int main(void)
{



//Helpers for input and output

   int N, K;
   cin >> N >> K;
    int C[N];
   for(int i = 0; i < N; i++)
   {
      cin >> C[i];
   }
    sort(C,C+N);
    int master_sum=0;
    int remainder=N%K;

     for(int i=1;i<=(N/K);i++)
    {
       int sum=0;
       for(int j=1;j<=K;j++)
       {
           sum=sum+C[N-j];
       }
       master_sum= master_sum + (i*sum);

    }
   int sum=0;
    for(int i=0;i<remainder;i++)
    {

        sum=sum+C[i];

    }
    master_sum= master_sum + ((N/K)+1)* sum;
    int result;
    result=master_sum;

   cout << *result << "\n";

   return 0;
}
