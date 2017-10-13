#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int a=4;
    int A =a;
    int n = 2*a-1;
    //vector<vector<int> > result(n,vector<int>(n));
    vector<vector<int> > result;
    for(int i = 0; i<A;i++)
    {
        vector<int> line;
        for (int k=0;k<i;k++)
        {
            line.push_back(A-k);
        }
        for(int j=i;j<n-i;j++)
        {
            line.push_back(A-i);
        }
        for (int k=i;k>0;k--)
        {
            line.push_back(A-k+1);
        }
        result.push_back(line);
    }

    for (int i=0;i<n-a+1;i++)
    {
        vector<int> line;
        for (int k=0;k<(a-i-1);k++)
        {
            line.push_back(A-k);
        }
        for (int j=0;j<(2*i+1);j++)
        {
            line.push_back(i+1);
        }
        for (int k=a-i-1;k>0;k--)
        {
            line.push_back(A-k+1);
        }
        if(i!=0)
            result.push_back(line);
    }

    for (int i=0;i<result.size();i++)
    {
        for(int j=0;j<result[i].size();j++)
        {
            cout<<result[i][j];
        }
        cout<<endl;
    }
    return 0;
}
