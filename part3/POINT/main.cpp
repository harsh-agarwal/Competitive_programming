#include <iostream>
#include"geometry.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    point p1(2,3);
    int a=p1.GetX();
    cout<<a;
    p1.SetX(1);
    a=p1.GetX();
    cout<<endl<<a;
    int n;
    cout<<endl<<"please enter the size of the pointer array";
    cin>>n;
    point Ar[5];
    for(int i=0;i<n;i++)
    {
        cout<<"please enter the x-co-ordinate";
        int d;
        cin>>d;
        Ar[i].SetX(d);
        cout<<"please enter the y-co-ordinate";
        int e;
        cin>>e;
        Ar[i].SetY(e);
    }
    PointArray p2(Ar,n);
    point *temp; point p3;
    temp=p2.returnpointer();
    for(int i=0;i<n;i++)
        cout<<(temp[i]).GetX()<<endl;
    cout<<"enter the x coordinate of the point to be pushed";
    int newX;
    cin>>newX;
    p3.SetX(newX);
    cout<<"enter the y coordinate of the point to be pushed";
    int newY;
    cin>>newY;
    p3.SetY(newY);
    p2.push_back(p3);
    temp=p2.returnpointer();
    for(int i=0;i<p2.returnsize();i++)
        cout<<temp[i].GetX()<<endl;
    point p4;
    int q;
    int p;
    cout<<endl;
    cout<<"please enter the position at which you need to enter the point";
    int insertposition;
    cin>>insertposition;
    cout<<endl<<"please enter the x-coordinate of the point to be inserted";
    cin>>p;
    p4.SetX(p);
    cout<<endl<<"please enter the y coordinate of the point to be inserted";
    cin>>q;
    p4.SetY(q);
    p2.insert(insertposition,p4);
    temp=p2.returnpointer();
    for(int i=0;i<p2.returnsize();i++)
        cout<<temp[i].GetX()<<endl;
    cout<<endl<<"please enter which point has to be removed (please enter the position...)";
    int removeposition;
    cin>>removeposition;
    p2.removal(removeposition);
    temp=p2.returnpointer();
    for(int i=0;i<p2.returnsize();i++)
        cout<<temp[i].GetX()<<endl;


    return 0;
}
