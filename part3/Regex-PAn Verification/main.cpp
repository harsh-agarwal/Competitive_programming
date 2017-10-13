#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int test_cases;
    cin>>test_cases;
    int answer[test_cases];
    for(int i=0;i<test_cases;i++)
        {
        char Entry1[100];

        int Entry[10];
        //while(Entry[])
        cin>>Entry1;
        //cout<<Entry1<<endl;
        if(strlen(Entry1)!=10)
            {
            answer[i]=0;
            continue;
            }
        for(int j=0;j<10;j++)
            {
            Entry[j]=int(Entry1[j]);

            //cout<<Entry[j]<<" ";
            }
         // cout<<"Harh1";
        if((Entry[0]<=90)&&(Entry[0]>=65)&&(Entry[1]<=90)&&(Entry[1]>=65)&&(Entry[2]<=90)&&(Entry[2]>=65)&&(Entry[3]<=90)&&(Entry[3]>=65)&&(Entry[4]<=90)&&(Entry[4]>=65)&&(Entry[9]<=90)&&(Entry[9]>=65))
            {
               // cout<<"HArsh2";
            if((48<=Entry[5])&&(Entry[5])<=57&&(48<=Entry[6])&&(Entry[6])<=57&&(48<=Entry[7])&&(Entry[7])<=57&&(48<=Entry[8])&&(Entry[8])<=57)
                {
                answer[i]=1;//cout<<"Harsh3";
               // continue;
                }
            else
                {
                answer[i]=0;
                //continue;
                }
            }
        else
            {
            answer[i]=0;
           // continue;
            }
        }
    for(int i=0;i<test_cases;i++)
        {
        if(answer[i]==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        }


    return 0;
}
