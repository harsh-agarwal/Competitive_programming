#include <iostream>
#include<math.h>

using namespace std;

int main()
{

       float x=1;float s=1;float f;
       float a=sqrt(x+sqrt(x));
    while(s>.00001)
    {
        f=a;
        a=sqrt(x+a);

        //cout<<x<<endl;
        s=a-f;
    }
   sum=sum+x;

    }

    return 0;

}
