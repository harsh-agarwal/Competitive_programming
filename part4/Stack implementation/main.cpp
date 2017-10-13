#include <cstdlib>
#include <iostream>
#include<stdio.h>

using namespace std;
unsigned int max_int=20;
class stack
{
      private:
             char *the_stack_of_symbols;
             int top;
      public:
             stack(int n)
             {
                    the_stack_of_symbols=new char[n];
                    top=-1;
             }
             int return_top()
             {
                 return(top);
             }
             void push(char a)
             {
                  top++;
                  the_stack_of_symbols[top]=a;

             }
             char pop()
             {
                  int to_be_popped=top;
                  top--;
                  return(the_stack_of_symbols[to_be_popped]);
             }
};

int search_operator(char c)
{
    if(c==')')return(5);
    if(c=='(')return(4);
    if(c=='$')
    return(3);
    else
    {
            if(c=='/' || c=='*')
            return(2);
            else
            {
                if(c=='+' || c=='-')
                return(1);
            }
    }
    return(0);
}

int main()
{

   char in_fix_expression[max_int];
   char post_fix_expression[max_int];

   char a='a';int i=0;
   int count1=0;
   int the_number_of_symbols=0;

   while((a!=32) && (a!=10))
   {
            a=getchar();


            if(a<48 || a>57)
            the_number_of_symbols++;
            in_fix_expression[count1]=a;
            count1++;
   }
   //cout<<the_number_of_symbols;
   //cout<<count1;
   //for(i=0;i<count1;i++)
    //cout<<in_fix_expression[i];
   cout<<endl;
   stack Harsh(the_number_of_symbols);

   int tracking_the_post_fix_expression=0;
   for( i=0;i<count1;i++)
   {
           char c=in_fix_expression[i];char b;
                if(i==count1-1)
               {
                   while((Harsh.return_top())!=-1)
                   {post_fix_expression[tracking_the_post_fix_expression]=Harsh.pop();
               }
                cout<<"The character being considered is"<<c<<endl;
                if(c=='(')
                    {
                        Harsh.push('(');continue;
                    }
                if(c==')')
                {
                    while((b=Harsh.pop())=='(')
                    {
                        //cout<<"Harsh"<<endl;
                        if(b=='(')break;
                        post_fix_expression[tracking_the_post_fix_expression]=b;
                        tracking_the_post_fix_expression++;
                    }
                }
           //cout<<"char being considered is"<<c<<endl;

           /*if(i==count1-1)
           {
               Harsh.p
               break;
           }*/

           if(c>47 && c<58)
           {
                   post_fix_expression[tracking_the_post_fix_expression]=c;
                   tracking_the_post_fix_expression++;
                   continue;
           }

            else
            {
                if(Harsh.return_top()==-1)
                {
                    Harsh.push(c);
                }
                else
                {

                    int num=search_operator(c);
                    int num_se_pehle=search_operator(b=Harsh.pop());

                        if(num>num_se_pehle)
                        {
                            Harsh.push(b);
                            Harsh.push(c);
                        }
                        else
                        {
                        post_fix_expression[tracking_the_post_fix_expression]=b;
                        tracking_the_post_fix_expression++;
                        Harsh.push(c);
                        }
                }
            }
   }
   }

    //cout<<endl;
   // cout<<tracking_the_post_fix_expression;

    for(i=0;i<tracking_the_post_fix_expression;i++)
    cout<<post_fix_expression[i];
    return(0);

}
