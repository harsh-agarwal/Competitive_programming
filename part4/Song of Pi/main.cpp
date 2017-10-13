#include <iostream>
#include<vector>
#include<stdio.h>
using namespace std;

int main()
{

    int t;
    cin>>t;int i=0;
    int Ar[29];
    Ar[0]=3;
    Ar[1]=1;
    Ar[2]=4;
    Ar[3]=1;
    Ar[4]=5;
    Ar[5]=9;
    Ar[6]=2;
    Ar[7]=6;
    Ar[8]=5;
    Ar[9]=3;
    Ar[10]=5;
    Ar[11]=8;
    Ar[12]=9;
    Ar[13]=7;
    Ar[14]=9;
    Ar[15]=3;
    Ar[16]=2;
    Ar[17]=3;
    Ar[18]=8;
    Ar[19]=4;
    Ar[20]=6;
    Ar[21]=2;
    Ar[22]=6;
    Ar[23]=4;
    Ar[24]=3;
    Ar[25]=3;
    Ar[26]=8;
    Ar[27]=3;
    Ar[28]=3;

    while(i<t)
    {
        vector<char> myLine;
        while (1)
        {
            char a;
            getc(a);
            if(a=='\0')break;
            myLine.push_back(a);
        }

        int counter=0;int character_length;int x=0;int flag=0;
        for(unsigned int j=0;j<myLine.size();j++)
        {

          if(((int(myLine[j])<=91)&&(int myLine[j])>=65)||(int(myLine[j]))>=97&&(int(myLine[j]<=122)))
                counter++;
          if((int(myLine[j])==32))
          {
            character_length=counter;
            x++;
            counter=0;
          }
          if(Ar[x-1]==counter)
          {
              continue;
          }
          else {flag=1; break;}

        }
        if(flag==1)
            answer[i]=0;
        else
            answer[i]=1;
        i++;
    }
    for(int i=0;i<t;i++)
    {
        if(answer[t]==1)
            cout<<"It's a pi song."<<endl;
        else
            cout<<"It's not a pi song."<<endl;
    }


    return 0;
}
