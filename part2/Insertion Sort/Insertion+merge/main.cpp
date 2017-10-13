#include <iostream>

using namespace std;




void insertionsort(int Ar[][4],int rows)
{
    for(int i=0;i<rows;i++)
    {
       int move;
       for(int j=1;j<4;j++)
        {
            Ar[i][j]=move;
             for(int k=j-1;k>=0;k++)
             {
                 if(Ar[i][k]>move)
                 {
                     int temp;
                     temp=Ar[i][k];
                     Ar[i][k]=Ar[i][k+1];
                     Ar[i][k+1]=temp;
                 }
             }
        }
    }
}

void insertionsortnonstandard(int Ar[][4],int *harsh,int rows,int remainder)
{
      for(int i=0;i<rows;i++)
    {
       int move;
       for(int j=1;j<4;j++)
        {
            Ar[i][j]=move;
             for(int k=j-1;k>=0;k++)
             {
                 if(Ar[i][k]>move)
                 {
                     int temp;
                     temp=Ar[i][k];
                     Ar[i][k]=Ar[i][k+1];
                     Ar[i][k+1]=temp;
                 }
             }
        }
    }
       int move;
       for(int i=1;i<remainder;i++)
       {
           harsh[i]=move;
           for(int j=i-1;j>0;j--)
           {
               if(move<harsh[i])
               {
                int temp;
                temp=harsh[j];
                harsh[j]=harsh[j+1];
                harsh[j+1]=temp;
               }
           }
       }
}

void print(int Ar[][4],int rows)
{

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<4;j++)
            cout<<Ar[i][j];
        cout<<"\n";
    }
}
void printnonstandard(int Ar[][4],int rows,int *harsh,int remainder)
{
    for (int i=0;i<rows;i++)
    {
        for(int j=0;j<4;j++)
            cout<<Ar[i][j];
    cout<<"\n";
    }
    cout<<"\n";
    for(int i=0;i<remainder;i++)
    {
        cout<<harsh[i];
    }
}



int main()
{
    cout << "Hello world!" << endl;

    int Ar[40][4];
    cout<<"please enter the number of inputs";

    int n;
    cin>>n;
    cout<<"please enter the inputs";
    int rows;
    int remainder=n%4;
          int *harsh;

    if(n%4==0)
        {
            rows=(n/4);
            for(int j=0;j<4;j++)
            {
                for (int i=0;i<rows;i++)
                   cin>>Ar[i][j];
            }


        }
    else
        {
        rows=(n/4);
           for(int j=0;j<4;j++)
              {
                 for (int i=0;i<rows;i++)
                   cin>>Ar[i][j];
              }

          harsh=new int[remainder];
          for(int k=0;k<remainder;k++)
                cin>>harsh[k];
        }
    if(n%4==0)
    {
        insertionsort(Ar,rows);
        print(Ar,rows);
    }
    else
    {
        insertionsortnonstandard(Ar,harsh,rows,remainder);
        printnonstandard(Ar,rows,harsh,remainder);
    }


    return 0;
}
