#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int output;
    vector<int> A = {0,1,2,3}
    int B;
    int C;
    vector<int> dig_C;
    int x = C;
    while(x>0)
    {
        dig_C.push_back(x%10);
        x = x/10;
    }

    int D = A.size()
    if(B>dig_C.size())
        output = 0;
    else if (B < dig_C.size())
    {
        if(find(A.begin(),A.end(),0) == A.end())
        {
            output = pow(D,B);
        }
        else
        {
            output = (D-1)*pow(D,B-1);
        }
    }
    else
    {
        vector<int> lower[B];
        for (int i=0;i<B;i++)
        {

        }
        vector<int> dp(B);
        dp[0] = 0;

    }
    return 0;
}
