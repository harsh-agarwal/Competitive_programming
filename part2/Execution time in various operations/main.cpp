#include <iostream>
#include<ctime>
using namespace std;

int main()
{
    clock_t start, khatam;
    double diff;
    double sum=0;
    int i,j;
    start = clock();
    for(i=100,j=0;j<100;i--,j++)

   {


        cout<<i<<"\t"<<j<<"\t";
        clock_t start2 = clock();
        cout<<i+j<<"\t";
        clock_t khatam2 = clock();
        double diff2=(double(khatam2-start2)*1000)/CLOCKS_PER_SEC;
        cout<<diff2<<endl;


    sum=sum+diff2;
   }
   khatam= clock();
    diff =  double((double(khatam-start)*1000)/CLOCKS_PER_SEC);
   cout<<diff/100<<"milliseconds it takes on avg"<<endl;
   cout<<sum/100<<"milliseconds it takes to undergo one addition(more precise)";

    return 0;
}
