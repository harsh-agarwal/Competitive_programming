#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int A = 16777214;
    vector<int> primes(A+1,1);
    primes[0] = 0;
    primes[1] = 0;
    vector<int> all_primes;
    int n = A;
    for (int i=2; i <= sqrt(n); i++)
    {
        if(primes[i]==1)
        {
            for (int j=2;i*j<=n;j++)
            primes[i*j]=0;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(primes[i]==1)
            all_primes.push_back(i);
    }

    vector<int> result;
    for (int i=0;i<all_primes.size();i++)
    {
        if( find(all_primes.begin(), all_primes.end(), A - all_primes[i]) !=all_primes.end())
        {
            result.push_back(all_primes[i]);
            result.push_back(A-all_primes[i]);
            break;
        }
    }
    cout<<result[0];

    return 0;
}
