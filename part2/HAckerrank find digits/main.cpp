#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    int answer[t];
    for(int i=0;i<t;i++)
    {
        int k;
        cin>>k;
        int a=k;int count=0;
        while(a!=0)
            {
                int r;
                r=a%10;
                a=a/10;
                if(r!=0)
                {
                    if(k%r==0)
                    count++;
                }


            }
        answer[i]=count;
    }

    for(int i=0;i<t;i++)
        cout<<answer[i]<<endl;

        return 0;
}
