#include <iostream>
#include<stack>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    stack<int> harsh;
    for(int i=0;i<5;i++)
        harsh.push(2*i+1+2+3);
    while(!harsh.empty())
    {
        cout<<harsh.top()<<endl;
        harsh.pop();
    }
    return 0;
}
