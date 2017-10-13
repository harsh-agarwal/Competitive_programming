#include <iostream>

using namespace std;

class point
{
private:
    int x,y;
public:
    point(int p,int q): x(p),y(q)
    {

    }
    int getX(){return x;}
     int getY(){return y;}
    void doubleval()
    {
        x=x*2;
        y=y*2;
    }

};
int main()
{
    cout << "Hello world!" << endl;
      point *p;
      p=new point(5,3);
    //myPoint.doubleval();
    cout<<"the numbers in my point were"<<p->getX()<<"and"<<p->getY();
    delete p;


    return 0;
}
