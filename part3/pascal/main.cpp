#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    cout<<"stage0";
    int A;
    A=5;

    cout<<"Step1";
    vector<vector<int> > pascal;
    vector<int> myvector;
    myvector.push_back(1);
    pascal.push_back(myvector);
    cout<<"Harsh";
    for (int i=1; i < A; i++) //line counter
    {
        vector<int> each_line;
        each_line.push_back(1);
        for (int j = 1 ; j < i; j++ )
        {
            each_line.push_back(pascal[i-1][j-1] + pascal[i-1][j]);
        }
        each_line.push_back(1);
        pascal.push_back(each_line);
    }

    return 0;
}
