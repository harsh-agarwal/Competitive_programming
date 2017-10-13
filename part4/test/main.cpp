#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int Ar[] = {-1,2.3};
    int* Ar_mask = new int[3];
    *Ar_mask = (*Ar>0);
    cout <<*Ar_mask;
    return 0;
}
