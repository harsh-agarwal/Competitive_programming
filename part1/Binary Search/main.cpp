#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    cout<<"please enter the number of inputs";
    int n;
    cin>>n;
    int Ar[50];
    cout<<"please enter the numbers";
    for(int i=0;i<n;i++ )
    {
        cin>>Ar[i];
    }

    cout<<"enter the element to be searched for";
    int searchelement;
    cin>>searchelement;
    int beg=0,end=(n-1);
    int mid;
    while(beg<=end)
    {

        mid=(beg+end)/2;
        if (Ar[mid]==searchelement)
            cout<<"element found";
        if(Ar[mid]<searchelement)
            beg=(mid)+1;
        else
            end=(mid)-1;
    }


    return 0;
}
