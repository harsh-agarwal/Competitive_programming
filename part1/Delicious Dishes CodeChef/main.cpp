#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
   cout<<"please enter the number of test cases";
   int t;
   cin>>t;
   int answer[t];
   cout<<"please enter the values of L and R";
   int number_of_digits=0;

   long int L[t],R[t];
   for(int i=0;i<t;i++)

    {
        cin>>L[i]>>R[i];
        answer[i]=0;
    }
    int b=1;
    for(int i=0;i<t;i++)
    {
     b=R[i];
     if((R[i]/10)==0)
        break;
     else
     {

         while(b!=0)
         {
          b=b/10;
          number_of_digits++;
         }
      }


      while(L[i]<=R[i])
      {
        cout<<L[i]<<endl;
        int x=L[i];int k=0;
        while(x!=0)
        {
            int Ar[number_of_digits];
            for(int j=0;j<number_of_digits;j++)
            {
                Ar[j]=x%10;
                if(j!=0)k++;


                x=x/10;
                int got_it=0;int g;
                for(g=0;g<k;g++)
                  { int f;
                   for(f=(g+1);f<=k;f++)
                     {


                       if(Ar[g]-Ar[f]==0)

                         {
                           answer[i]++;got_it=1;
                         }
                         if(got_it==1)break;
                     }
                     if(f<=k)break;
                  }
                 if(g<k)break;
            }
         }
         L[i]++;
       }
    }
     for(int i=0;i<t;i++)
     {
       cout<<answer[i]<<endl;
     }






    return 0;
}
