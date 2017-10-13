#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int Ar[5][5];
    for (int i=0;i<5;i++)
        for(int j=0;j<5;j++)
        Ar[i][j]=false;
    //int j=0;

    for (int i=0;i<5;i++)
        {
        for(int j=0;j<5;j++)
        cout<<Ar[i][j]<<"\t";
        cout<<endl;
        }
int sum=0;

while(sum!=1)
{

  for(int j=2;j>=0;j--)
  {
      Ar[2][j]=!(Ar[2][j]);
      Ar[1][j]=!(Ar[1][j]);
       Ar[3][j]=!(Ar[3][j]);
       Ar[1][j+1]=!(Ar[1][j+1]);
       Ar[1][j-1]=!(Ar[1][j-1]);

  }
for(int j=3;j<5;j++)
{
     Ar[2][j]=!(Ar[2][j]);
     Ar[2][j+1]=!(Ar[2][j+1]);
      Ar[2][j-1]=!(Ar[2][j-1]);
       Ar[1][j]=!(Ar[1][j]);
        Ar[3][j]=!(Ar[3][j]);
}

for(int i=1;i>=0;i++)
{
    Ar[i][2]=!(Ar[i][2]);
    Ar[i-1][2]=!(Ar[i-1][2]);
    Ar[i+1][2]=!(Ar[i+1][2]);
    Ar[i][3]=!(Ar[i][3]);
    Ar[i][1]=!(Ar[i][1]);

}
for(int i=3;i<5;i++)
{

    Ar[i][2]=!(Ar[i][2]);
    Ar[i-1][2]=!(Ar[i-1][2]);
    Ar[i+1][2]=!(Ar[i+1][2]);
    Ar[i][3]=!(Ar[i][3]);
    Ar[i][1]=!(Ar[i][1]);


}
sum=0;
for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
        sum=sum+Ar[i][j];
}

}

cout<<endl;
    for(int i=0;i<5;i++)
     {
         for(int j=0;j<5;j++)
         cout<<Ar[i][j]<<"\t";cout<<endl;
     }
    return 0;
}
