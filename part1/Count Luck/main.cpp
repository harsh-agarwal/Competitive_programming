#include <iostream>
/*Reference for status array    I=initial point
                                N=not seen
                                S=seen
                                F=final point
                                X=not accessible */
using namespace std;
class Harsh
{
    int id;
    char status;
public:
    void statuschange()
    {
        status='S';
    }
    char returnStatus()
    {
        return status;
    }
    void alag()
    {
        id=0;
    }
    void initialise(int i,int j,char a,int n,int m)
    {
        id=m*(i-1)+j;
        status=a;
    }
};



int main()
{
    cout << "Hello world!" << endl;
    int t;
    for(int x=0;x<t;x++)
    {
        int n,m;
        cin>>n>>m;
        char Ar[n][m];
        Harsh refer[n+2][m+2];
        int starId;int number_of_elements=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cin>>Ar[i][j];
                if(Ar[i][j]=='*')
                {
                  starId=m*(i-1)+j;
                  refer[i][j].initialise(i,j,'I',n,m);
                  number_of_elements++;
                }
                if(Ar[i][j]=='.')
                {
                    refer[i][j].initialise(i,j,'N',n,m);
                    number_of_elements++;
                }
                if(Ar[i][j]=='M')
                {
                    refer[i][j].initialise(i,j,'F',n,m);
                    number_of_elements++;
                }
                if(Ar[i][j]=='X')
                {
                    refer[i][j].initialise(i,j,'X',n,m);

                }
            }
        }

        int path[number_of_elements];
        path[0]=starId;
        for(int j=0;j<m+2;j++)
        {
            refer[0][j].alag();
            refer[n+1][j].alag();
        }
        for(int i=0;i<n+2;i++)
        {
            refer[i][0].alag();
            refer[i][m+1].alag();
        }



        int k;
        cin>>k;
        char a='I';
        int p;
            p=0;
        while(a!='F')
        {
            if(path[p]-m>0)
            {
                int id_in_consideration=path[p]-m;
                int i,j;
                i=(id_in_consideration/m)+1;
                j=id_in_consideration%m;
                if(refer[i][j].returnStatus()=='N'||refer[i][j].returnStatus()=='I'||refer[i[j].returnStatus()=='F')
                {
                    p++;
                    path[p]=id_in_consideration;
                    refer[i][j].statuschange();
                    a=refer[i][j].returnStatus();
                }
                else
            }
            else
            {
                if(path[p]-1>0)
                {
                    int id_in_consideration=path[p]-1;
                    int i,j;
                    i=(id_in_consideration/m)+1;
                    j=(id_in_consideration%m);
                    if(refer[i][j].returnStatus()=='N')
                    {
                        p++;
                        path[p]=id_in_consideration;
                        refer[i][j].statuschange();
                        a=refer[i][j].returnStatus();
                    }

                }

            }

    }
    return 0;
}
