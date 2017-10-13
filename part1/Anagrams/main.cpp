#include <iostream>
#include <vector>
#include <string>
#include<algorithm>
using namespace std;
typedef pair<string,int> mypair;
bool compare_my_pair(mypair &l,mypair &r)
{
    return l.first < r.first;
}


int main()
{
    cout << "Hello world!" << endl;

    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    //would be mapping each integer sum to the position of the word
    vector<string> A = {"cat","dog","god","tca"};
    vector<string> duplicate = A;
    vector<pair<string,int>> new_data;
    for(int i=0;i<A.size();i++)
    {
        string cons;
        cons = A[i];
        //pair<string,int> tmp;
        //tmp.first = cons;
        //tmp.second = i;
        sort(cons.begin(),cons.end());
        new_data.push_back(make_pair(cons,i));
    }

    sort(new_data.begin(),new_data.end());
    int i=0;
    vector<vector<int>> result;

    for(;i < new_data.size()-1;i++)

    {
        vector<int> each_set;
        while(new_data[i].first == new_data[i+1].first)
        {
            each_set.push_back(new_data[i].second);
            each_set.push_back(new_data[i+1].second);
            i++;
        }
        result.push_back(each_set);
    }

    /*for(int j=0;j<result.size();j++)
    {
        for(int x = 0;x < result[j].size(); x++)
        {
            cout<<result[j][x];
        }
        cout<<endl;
    }*/


    return 0;
}
