#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int number;
    cout<<"enter the number whose factorial has to be calculated";
    cin>>number;cout<<"\n";
    while(number<0)
    {
        cout<<"please enter a positive number";
        cin>>number;
    }
    int accumulator=1;
    for(;number>0;accumulator*=number--);
    cout<<accumulator<<" is the factorial";
    return 0;
}
