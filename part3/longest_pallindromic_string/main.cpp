#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    string A ="aaaabaaa";

    //cout<<(A[0]==A[1]);
    int n = A.length();
    int table[100][100];
    int max_length = 1;
    int start = 0;
    int end;
    for(int i=0;i<n;i++)
    {
        table[i][i] == true;
        start = i;
        end = i;
    }

    //considering a substring of length 2

    for(int i=0;i<n;i++)
    {
        if(A[i]==A[i+1])
        {
            table[i][i+1] = true;
            max_length = 2;
            start = i;
        }
        else
            table[i][i+1] = false;
    }

    // considering a substring of length k
    for(int k=3;k <= n;k++)
    {

        for(int i=0;i< n-k+1;i++)
        {

            int j = i+k-1;
            if(A[i]==A[j] && table[i+1][j-1]==true)
            {
                table[i][j] = true;
                cout<<"starting_at"<<i<<endl;
                cout<<"ending_at"<<j<<endl;
                if(k>max_length)
                {
                    max_length = k;
                    start = i;
                    cout<<"start "<<start<<endl;
                    cout<<"max_length "<<max_length<<endl;
                }
            }
            else
                table[i][j] = false;
        }
    }



    //cout<<start;

    string B;
    for(int x=start;x<max_length;x++)
    {
        B.push_back(A[x]);
    }

    cout<<B;

    return 0;
}
