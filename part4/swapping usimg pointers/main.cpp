#include <iostream>

using namespace std;

void swap(int *a,int *b)
{
    int *temp=new int;//why not directly declaring *temp works.....
    *temp=*a;
    *a=*b;
    *b=*temp;
    delete temp;
}
int main()
{
    cout << "Hello world!" << endl;
    cout<<"please enter the numbers that are to be swapped";
    int x,y;
    int *a,*b;
    cin>>x>>y;
    a=&x;
    b=&y;
    swap(a,b);
    cout<<endl<<*a<<" "<<*b;
    return 0;
}
