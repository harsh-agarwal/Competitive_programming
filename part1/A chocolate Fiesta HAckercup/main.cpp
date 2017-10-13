#include <iostream>
#include<vector>
#include<cmath>
using namespace std;

void printSet(int array[],int size,int Ar[][2],int &number){
    int i;int sum=0;

    for (i=1;i<=size;i++)
        {   int b=array[i];
            sum=sum+Ar[b][1];
        }
        if(sum%2==0)
            number++;
            //std::cout << array[i] << " ";
    //std::cout << std::endl;

    return;
}

int printPowerset (int n,int Ar[][2]){
    int stack[10],k;int number=0;

    stack[0]=0; /* 0 is not considered as part of the set */
    k = 0;

    while(1){
        if (stack[k]<n){
            stack[k+1] = stack[k] + 1;
            k++;
        }

        else{
            stack[k-1]++;
            k--;
        }

        if (k==0)
            break;

        printSet(stack,k,Ar,number);
    }

    return(number);
}

int main(){
    int n;
    cin>>n;
    int Ar[n];
    vector<int> even,odd;
    for(int i=0;i<n;i++)
        {
            cin>>Ar[i];
            if(Ar[i]%2==0)
                even.push_back(Ar[i]);
            else
                odd.push_back(Ar[i]);
        }
        unsigned int m=even.size();
        unsigned int p=odd.size();
        int odd_array[p+1][2];
        odd_array[0][0]=0;
        odd_array[0][1]=0;
        for(unsigned int i=1;i<=p;i++)
        {
            odd_array[i][0]=i;
            odd_array[i][1]=odd.at(i-1);
        }

   int f=1;
   for(unsigned int j=0;j<m;j++)
   {
       f=f*2;
   }
   f=f-1;
   int sub_odd=printPowerset(p,odd_array);
   int a=(f)%(1000000007);
   int b=(sub_odd)%(1000000007);
   cout<<b;
int result=a+b+((a%1000000007)*(b%1000000007))%1000000007;
   cout<<result;
    return 0;
}
