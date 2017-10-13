#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
 cout<<"please enter the size of the main array";
 int n;

 cin>>n;
 vector<int> MainArray(n);
 for(int i=0;i<n;i++)
    cin>>MainArray[i];
 cout<<"please enter the values of P and Q";
 int p,q;
 cin>>p;cin>>q;int chota;int answer;
 for(vector<int>::size_type j=0;j<n;j++)

 {
    for(int i=p;i<=q;i++)
        {
            int difference=fabs(((MainArray[j])-i));
         if(i==p)
            chota=(difference);
         else
            if (difference<chota)
            answer=i;
        }
 }
 cout<<endl<<answer;




 /*vector<double> student_marks(20);
 for(int i=0;i<20;i++)
 {
     cout<<"Enter for the student #"<<i+1<<":";
     cin>> student_marks[i];
 }
*/

 return 0;
}
