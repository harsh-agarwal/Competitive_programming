#include <iostream>

using namespace std;

struct cut
{
    int cost;
    char nature;
} ;
int main()
{
    vector<cut> CostOfCuttingVertically ;
    vector<cut> CostOfCuttingHorizontally;
    intt m,n;
    cin>>m>>n;
    for(int i=0;i<2;i++)
    {
        int p;
        cin>>p;
        CostOfCuttingHorizontally.cost.push_back(p);
    }
    cout<<CostOfCuttingHorizontally
    /*for(int i=0;i<m;i++)
    {
        int p;
        cin>>p;
        CostOfCuttingVertically.push_back(p);
    }

    sort(CostOfCuttingHorizomtally.begin(),CostOfCuttingHorizomtally.end());
    sort(CostOfCuttingVertically.begin(),CostOfCuttingVertically.end());
    */
    return 0;
}
