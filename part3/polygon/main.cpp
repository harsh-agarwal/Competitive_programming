#include <iostream>

using namespace std;

class base
{
public:
    virtual void show()
    {
        cout<<"base class";

    }
};
class derived:public base
{
    void show()
    {
        cout<<"Derived class";

    }
};
int main()
{
    cout << "Hello world!" << endl;
    base *b;
    derived d;
    b=&d;
    b->show();


    return 0;
}
