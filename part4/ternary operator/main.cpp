#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    cout<<"please enter the number";
    int n;
    cin>>n;

    while(true)
    {
      int result;
      result=(n%5==0?n/5:-1);
      cout<<"\n"<<result<<"\n";
      cout<<"please enter the next number";

      cin>>n;
    }


    return 0;
}
