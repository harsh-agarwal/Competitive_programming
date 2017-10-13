#include <iostream>

using namespace std;

int input(int Ar[])
{
    cout << "Hello world!" << endl;
    cout<<"please enter the number of inputs";
    int n;
    cin>>n;
    cout<<"please enter the values";
      for(int i=0;i<n;i++)
        cin>>Ar[i];
    return n;
}
int insertionsort( int Ar[],int size)
{
    int j;int temp;
    for (int i=1;i<size;i++)

          {

           int move=Ar[i];
            for (j=i-1;j>=0;j--)
            {

              if ( move < Ar[j])
               {
                  temp=Ar[j+1];
                  Ar[j+1]=Ar[j];
                  Ar[j]=temp;
               }

            }

          }
return (0);
}

void print(int Ar[],int size)

{
   cout<<"the sorted sequence is";
   for (int i=0;i<size;i++)
     {
       cout<<Ar[i];
     }
}

int main()
{

    cout <<"welcome";
    int Ar[50];int size;
    size=input(Ar);
    insertionsort(Ar,size);
    print(Ar,size);
}
