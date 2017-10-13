#include <iostream>
# include <vector>
#include <string>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    vector<string> A { "glu", "muskzjyen", "ahxkp", "t", "djmgzzyh", "jzudvh", "raji", "vmipiz", "sg", "rv", "mekoexzfmq", "fsrihvdnt", "yvnppem", "gidia", "fxjlzekp", "uvdaj", "ua", "pzagn", "bjffryz", "nkdd", "osrownxj", "fvluvpdj", "kkrpr", "khp", "eef", "aogrl", "gqfwfnaen", "qhujt", "vabjsmj", "ji", "f", "opihimudj", "awi", "jyjlyfavbg", "tqxupaaknt", "dvqxay", "ny", "ezxsvmqk", "ncsckq", "nzlce", "cxzdirg", "dnmaxql", "bhrgyuyc", "qtqt", "yka", "wkjriv", "xyfoxfcqzb", "fttsfs", "m" };
    int B = 144;
    int n = A.size();
    vector<string> result;
    //if(n==0)
    //{
    //    cout<<result;
    //}
    vector<int> len_of_words(n,0);
    for (int i=0; i<n;i++)
    {
        len_of_words[i] = A[i].length();
    }

    vector<vector<string>> line_wise_vector;
    int sum = len_of_words[0];
    vector<string> line;
    vector<int> spaces;
    line.push_back(A[0]);
    if(n==1)
        line_wise_vector.push_back(line);

    for(int i=1;i < n;i++)
    {
        sum = sum + 1 + len_of_words[i];
        if(sum <= B)
        {
            line.push_back(A[i]);
            if(i==n-1)
                line_wise_vector.push_back(line);
        }
        if(sum > B)
        {
            sum = sum - 1 - len_of_words[i];
            int total_spaces = B - sum;
            int number_of_words = line.size();
            int number_of_spaces_additional = total_spaces;
            if(number_of_words>1)
                number_of_spaces_additional = (total_spaces/(number_of_words-1));
            spaces.push_back(number_of_spaces_additional);
            line_wise_vector.push_back(line);
            sum = len_of_words[i];
            line.clear();
            line.push_back(A[i]);
            if(i==n-1)
                line_wise_vector.push_back(line);
        }
    }

    int number_of_lines = line_wise_vector.size();

    for (int i=0;i<number_of_lines;i++)
    {
        string line1="";
        for (int j=0;j<line_wise_vector[i].size()-1;j++)
        {
            line1 = line1 + line_wise_vector[i][j];
            line1 = line1 + " ";
            for (int x=0;x<spaces[i];x++)
                line1 = line1 + " ";
        }
        line1 = line1 + line_wise_vector[i][line_wise_vector[i].size()-1];
        //cout<<line1<<endl;
        result.push_back(line1);
    }

    for(int k=0;k<result.size();k++)
    {
        cout<<result[k]<<endl;
    }
    return 0;
}
