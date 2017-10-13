#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

int get_value(string A)
{
    int len = A.length();
    int ten = 1;
    //cout<<len<<endl;
    //cout<<int(A[0]) - int('0')<<endl;
    if(A[0] == '-') // the value is negative
    {
        ten = -1;
    }
    int number = 0;
    for(int i = len-1 ; i >= 0; i--)
    {
        if(A[i] =='-') break;
        number = number + ten * (int(A[i]) - int('0'));
        ten = ten * 10;
    }

    return number;
}

int main()
{
    cout << "Hello world!" << endl;
    //string A1 = "harsh";
    //string B1 = "harsh";
    //if(A1=="harsh") cout<<"harsh"<<endl;
    string A[] = {"5", "1", "2", "+", "4", "*", "+", "3", "-" };

    stack<int> evaluation;
    for(int i=0; i < 9; i++)
    {
        if(A[i]!="+" && A[i]!= "-" && A[i]!= "/" && A[i]!= "*")
        {
            //means it is a number
            evaluation.push(get_value(A[i]));
        }
        else
        {
            // it's an operand
            int tmp1; int tmp2;
            tmp1 = evaluation.top();
            evaluation.pop();
            tmp2 = evaluation.top();
            evaluation.pop();

            if(A[i] == "+") evaluation.push(tmp2 + tmp1);
            if(A[i] == "-") evaluation.push(tmp2 - tmp1);
            if(A[i] == "*") evaluation.push(tmp2 * tmp1);
            if(A[i] == "/") evaluation.push(tmp2/tmp1);
        }
    }
    cout<<evaluation.top();
    return 0;
}
