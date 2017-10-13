#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<vector<string>> put_this(vector<vector<int>> &new_solution, vector<vector<string>> &current_solutions)
{

    vector<string> sol;
    int N = new_solution.size();
    for (int i=0;i<N;i++)
    {
        string each_line = "";
        for(int j=0;j<N;j++)
        {
            if(new_solution[i][j]==0)
                each_line = each_line + ".";
            if(new_solution[i][j]==1)
                each_line = each_line + "Q";
        }
        sol.push_back(each_line);
    }

    current_solutions.push_back(sol);
    return current_solutions;
}

bool can_place(vector<vector<int>> &board_situation,int x,int y)
{
    int i,j;
    int N = board_situation.size();
    for(i=0;i<y;i++)
    {
        if(board_situation[x][i]==1)
            return false;            // condition moght change depends how are we giving
    }

    for(i=x, j = y; i>=0,j>=0;i--,j--)
    {
        if(board_situation[i][j]==1)
            return false;
    }

    for(i = x,j = y;i<N,j>=0;i++,j--)
    {
        if(board_situation[i][j]==1)
            return false;
    }
    return true;
}


bool solveNQUtility(vector<vector<int>> &board_situation,int x,int y,vector<vector<string>> &current_solutions)
{
    // let's assume the board_situation is an NxN vector  // [row][col] is the coordinate of the last queen placed
    int N = board_situation.size();
    if(y+1==N)
    {
        vector<vector<string>> harsh = put_this(board_situation,current_solutions); // return dekhna padega
        return true;
    }
    else
    {
        for (int row=0;row<N;row++)
        {

            if(can_place(board_situation,row,y+1))
            {
                board_situation[row][y+1] = 1;
                return solveNQUtility(board_situation,row,y+1,current_solutions);
                board_situation[row][y+1] = 0;
            }

        }
        return false;
    }



}
void print(vector<vector<string>> &current_solutions)
{
    for(int i = 0;i< current_solutions.size();i++)
    {
        for(int j=0;j<current_solutions[0].size();j++)
        {
            cout<<current_solutions[i][j]<<endl;
        }
        cout<<endl;
    }
}
int main()
{
    int A = 4;
    vector<vector<string>> current_solutions;
    vector<vector<int>> board_situation(A,vector<int>(A));
    for(int i=0;i<A;i++)
    {
        for(int j=0;j<A;j++)
            board_situation[i][j] = 0;
    }



    for(int i=0;i<A;i++)
    {
        board_situation[i][0] = 1;
        if(solveNQUtility(board_situation,i,0,current_solutions))
            print(current_solutions);
    }

    print(current_solutions);
}
