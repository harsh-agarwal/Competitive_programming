#include <iostream>
#include<cmath>
#include<vector>
#define size_of_the_vector sizeof
using namespace std;

double function_value(double a)
{
    double b;
    b=2*exp(-a)-(1/(a+1))-(1/(a+2));
    cout<<"f(x) at x="<<a<<"is"<<b;
    return(b);
}

double calculating_next_x(double x_k_minus_one,double x_k)
{
    double x_k_plus_one;
    double function_value_at_x_k=function_value(x_k);cout<<"   ";
    double function_value_at_x_k_minus_one=function_value(x_k_minus_one);cout<<"   ";
    x_k_plus_one=x_k-((function_value_at_x_k)*(x_k-x_k_minus_one))/(function_value_at_x_k-function_value_at_x_k_minus_one);
    return(x_k_plus_one);
}
int main()
{
    cout << "Hello world!" << endl;
    cout<<"Please enter the initial values that are to be used in the secant method";
    cout<<endl;
    double x;
    double y;
    cin>>x>>y;
    double resultX;
    double resultY;
    resultX=function_value(x);
    resultY=function_value(y);
    vector<double> Harsh;
    if(resultX>resultY)
    {
        Harsh.push_back(x);
        Harsh.push_back(y);
    }
    else
    {
        Harsh.push_back(y);
        Harsh.push_back(x);
    }
    //cout<<endl<<"harsh1"<<endl;
    unsigned int size_of_the_vector=sizeof(Harsh);
    //cout<<endl<<"Harsh2";
    cout<<endl<<Harsh[(((sizeof(Harsh))-1))]<<endl;
    cout<<endl<<Harsh.at(size_of_the_vector-1)<<endl<<Harsh.at(size_of_the_vector-2);

    while(Harsh.at(size_of_the_vector-1)-Harsh.at(size_of_the_vector-2)<0.0000001)
    {
        double x_k_plus_one;
        x_k_plus_one=calculating_next_x(Harsh.at(size_of_the_vector-1),Harsh.at(size_of_the_vector-2));
        cout<<"x_k+1="<<x_k_plus_one;
        Harsh.push_back(x_k_plus_one);
        size_of_the_vector=sizeof(Harsh);
    }

    cout<<endl<<"the root of the given equation is"<<Harsh.at(size_of_the_vector-1);
    return 0;
}
