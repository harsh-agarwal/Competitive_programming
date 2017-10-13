#include <iostream>
#include<vector>
#include<math.h>
using namespace std;
int main()
{

    int n;double sum=0;
    cin>>n;
    std::vector<int> Energy_Values(n+1);
    Energy_Values.push_back(0);
    for(int i=1;i<=n;i++)
    {
        int b;
        cin>>b;
        Energy_Values.push_back(b);
    }
    //for(int i=1;i<=n;i++)
    //cout<<Energy_Values[i]<<"\t";
    int a=1;
    for(int i=1;i<=n;i++)
    {

       // double b=(double(Energy_Values.pop_back())*double(a));
        sum=sum+Energy_Values.back();
        //a=a*2;
    }
    cout<<endl<<ceil(sum);
    return 0;
}
