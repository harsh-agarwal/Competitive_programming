#include <iostream>
//#include<vector>
#include<string.h>
using namespace std;

int main()
{
   // std::cout << "Enter a:\n";
std::string input;
std::getline(std::cin, input);
unsigned long long int n=input.length();
    int Ar[n+1];
    Ar[0]=0;
    long long int num=1;long long int res=0;
    for(unsigned int i=1;i<=n;i++)
    {
        char b;
        b=input[i-1];
        int c=int(b);
        Ar[i]=c%48;
        res=(res*11+num*Ar[i])%(1000000007);
        num=(2*num)%(1000000007);


    }
    cout<<res;







    return 0;
}
