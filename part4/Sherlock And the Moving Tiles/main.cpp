#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n;
    float s1,s2,l;
    cin>>l>>s1>>s2>>n;
    float queries[n];
    float answer[n];float a=sqrt(2);
    float rel=fabs(s2-s1);
    for(int i=0;i<n;i++)
        {
        cin>>queries[i];
        answer[i]=((l-sqrt(queries[i]))*a)/rel;
        }
    for(int i=0;i<n;i++)
        {
        printf("%0.8lf",answer[i]);
        cout<<endl;
        }
    return 0;
}
