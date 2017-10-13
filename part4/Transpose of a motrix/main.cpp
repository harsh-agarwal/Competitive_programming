#include <iostream>

using namespace std;

void transpose( const int Ar[][5],int ArT[][4])
{
   int length=5,width=4;

    for (int i=0;i<width;i++)
    {
        for (int j=0;j<length;j++)

        {
           ArT[j][i]=Ar[i][j];
        }
    }
    for (int i=0;i<length;i++)
        {


          for (int j=0;j<width;j++)
           {
             cout<<ArT[i][j]<<"\t";
           }
    cout<<"\n";
         }

}


int main()
{
    const int length=5;
    const int width=4;
    const int Ar[width][length]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int ArT[length][width];
    cout << "Hello world!" << endl;
    cout<<"please enter the values";
   for(int i=0;i<width;i++)
   {

    {
        for(int j=0; j<length;j++)
            cin>>Ar[i][j];
        //for(int j=0; j<length;j++)
           // cout<<"\t"<<Ar[i][j];

    }
   }

/*cout<<endl<<"the elements of the last column are      ";
for(int i=0;i<width;i++)
cout<<Ar[i][4]<<"\t";
   /*for(int i=0;i<width;i++)

   {
       for(int j=0;j<length;j++)
        cout<<Ar[i][j]<<"\t";
        cout<<endl;
   }
*/    transpose(Ar,ArT);

    return 0;
}
