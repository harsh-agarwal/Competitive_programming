#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    cout<<"please enter the word whose length has to be calculated";
    char str[20];
    cin>>str;
    char *ptr;
    ptr=str;
    int count=1;

    while(true)
    {
        if(*(++ptr)=='\0')
            break;
        count++;
    }
    cout<<"the length of the "<<str<<"is"<<count;

    return 0;
}
