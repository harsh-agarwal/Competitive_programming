#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int x,d,n;
    x = 79161127;
    n = 99046373;
    d = 57263970;

    int count  = 1;
    int result = x%d;

    while(count < n)
    {
        count = count *2;
        if(count > n)
        {
            int result_has = count /2;
            for(int i=0;i<n-(count/2);i++)
            {
                result = (result * x)%d;
            }
        }
        else
            result = (result*result)%d;

    }

    if(result>=0)
        cout<<result%d;
    else
        cout<<(d - abs(result%d));
    return 0;
}
