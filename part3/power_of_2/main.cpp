#include <iostream>
#include <string>
using namespace std;

string divide_by_2(string A)
{
    int num_digits = A.length();
    int r;
    string q;
    int digit_covered;
    if(int(A[0]) - int('0') < 2 && num_digits > 1)
    {
        int number = 10*(int(A[0]) - int('0')) + int(A[1]) - int('0');
        int quotient = number/2;
        q.push_back(char(int('0')+quotient));
        r = number%2;
        digit_covered = 2;
    }
    else
    {
        int number =  int(A[0]) - int('0');
        int quotient = number/2;
        q.push_back(char(int('0')+quotient));
        r = number%2;
        digit_covered = 1;
    }
    for (int i=digit_covered; i < num_digits; i++)
    {
        int number = 10*r + int(A[i]) - int('0');
        int quotient = number/2;
        q.push_back(char(int('0')+quotient));
        r = number%2;
    }

    if(r==0)
        return q;
    else
        return "not_possible";
}



int main()
{
    cout << "Hello world!" << endl;
    int number = 2;
    string result = "24";
    while(number > 1)
    {
        result = divide_by_2(result);
        int digits_in_result = result.length();
        int number;
        if(digits_in_result==1)
        {
            number = int(result[0]) - int('0');
            if(number==1)
            {
                cout<<" "<<1;
                break;
            }

        }
        else
        {
            number = 10*(int(result[1]) - int('0')) + int(result[0]) - int('0');
        }
        if(result == "not_possible")
        {
            cout<<0;
            break;
        }
    }

    return 0;
}
