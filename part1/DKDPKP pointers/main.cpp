#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    char *oddOrEven = "NeverOddOrEven ";
    char *nthCharPtr;
    nthCharPtr=&oddOrEven[5];
    cout<<*nthCharPtr;
    nthCharPtr--;
    cout<<"\n"<<nthCharPtr<<endl;
    char **pointerPtr;
    pointerPtr=&nthCharPtr;
    cout<<pointerPtr<<"harsh"<<endl;
    cout<<**pointerPtr;
    nthCharPtr++;
    int difference=nthCharPtr-oddOrEven;
    cout<<difference;


    return 0;
}
