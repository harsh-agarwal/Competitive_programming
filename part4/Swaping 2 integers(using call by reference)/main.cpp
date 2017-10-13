#include <iostream>

using namespace std;

void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}


int main()
{
    cout << "Hello world!" << endl;
    cout<<"please enter the values that are to be swapped";
    int a,b;
    cin>>a;
    cout<<" next value";
    cin>>b;
    swap(a,b);
    cout<<endl<<a<<" and "<<b;
    return 0;
}
