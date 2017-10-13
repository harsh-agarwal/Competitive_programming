#include <iostream>
#include<vector>

using namespace std;

void fillVector(vector<int>&);
void print(const vector<int>&);
int main()
{
    cout << "Hello world!" << endl;
    vector<int> Harsh;
    fillVector(Harsh);
    print(Harsh);
    return 0;
}

void print(const vector<int>& myVector)
{
    // int n=myVector.size();
    cout<<"the vector is : ";
    for(unsigned int i=0;i<myVector.size();i++)
    {
        cout<<myVector.at(i)<<" ";
    }
    cout<<endl;
}
void fillVector(vector<int>& myVector)
{
    int input;
    cout<<"please enter the values that are to be entered in vector and press -1 to stop"<<endl;
    cin>>input;
    while(input!=-1)
    {
        myVector.push_back(input);
        cin>>input;
    }
}
