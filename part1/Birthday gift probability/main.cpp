#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<iomanip>
using namespace std;


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin>>N;
    int Ar[N];float sum=0;
    for(int i=0;i<N;i++)
    {
        cin>>Ar[i];
        sum=sum+Ar[i];
    }
    float x=sum/2.0;
    std::cout<<fixed;
    std::cout<<std::setprecision(2)<<x;

    return 0;
}
