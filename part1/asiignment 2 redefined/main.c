#include <stdio.h>
#include <stdlib.h>

int todo2(int Ar[][2],int p,int r)
{
    int i=p-1;
    float x=Ar[r][1];int j;
    for( j=p;j<r;j++)
    {
        if(Ar[j][1]<=x)
        {
            i=i+1;
            float temp=Ar[j][1];
                Ar[j][1]=Ar[i][1];
                Ar[i][1]=temp;
            float temp1=Ar[j][0];
                Ar[j][0]=Ar[i][0];
                Ar[i][0]=temp1;
        }
    }
    float temp=Ar[i+1][1];
    Ar[i+1][1]=Ar[r][1];
    Ar[r][1]=temp;
    float temp1=Ar[i+1][0];
    Ar[i+1][0]=Ar[r][0];
    Ar[r][0]=temp1;
    return(i+1);
}

int todo1(float Ar[][2],int p,int r)
{
    int i=p-1;
    float x=Ar[r][0];int j;
    for( j=p;j<r;j++)
    {
        if(Ar[j][0]<=x)
        {
            i=i+1;
            float temp=Ar[j][1];
                Ar[j][1]=Ar[i][1];
                Ar[i][1]=temp;
            float temp1=Ar[j][0];
                Ar[j][0]=Ar[i][0];
                Ar[i][0]=temp1;
        }
    }
    float temp=Ar[i+1][1];
    Ar[i+1][1]=Ar[r][1];
    Ar[r][1]=temp;
    float temp1=Ar[i+1][0];
    Ar[i+1][0]=Ar[r][0];
    Ar[r][0]=temp1;
    return(i+1);
}

void quickSort1(float Ar[][2],int p,int r)
{
    if(p>=r)return;
    int q=todo1(Ar,p,r);
        quickSort1(Ar,p,q-1);
        quickSort1(Ar,q+1,r);
}



void quickSort2(int Ar[][2],int p,int r)
{
    if(p>=r)return;
    int q=todo2(Ar,p,r);
        quickSort2(Ar,p,q-1);
        quickSort2(Ar,q+1,r);
}


void check_sum_pairs()
{

    int number_list[50];
    char Ar[100];
    int i=-1;
    char a='a';
    //int count=0;
    int k=0;
    while((a=getchar())!='\n')
    {

        if(a==32)
        {
            int j=i;int w=1;int number=0;
            for(;j>=0;j--)
            {
                number=((int)Ar[j]-48)*w+number;
                w=w*10;
            }
            number_list[k]=number;
            k++;
            i=-1;
           // printf("this was the %d wala number \n",k);
        }
        else
        {
            i++;
            Ar[i]=a;
        }

    }
    int j=i;int w=1;int number=0;

    for(;j>=0;j--)
    {
        number=((int)Ar[j]-48)*w+number;
        w=w*10;
    }
    number_list[k]=number;
    k++;

    int sum;
    scanf("%d",&sum);

    quickSort(number_list,0,k);

    int index_of_sum_by_two=0;
    i=0;
    while(number_list[i]<=(sum/2))
    {
        index_of_sum_by_two++;
        i++;
        if(i>=k)break;
    }
    int index_of_sum=index_of_sum_by_two;
    while(number_list[i]<=sum)
    {
        index_of_sum++;
        i++;
        if(i>=k)break;
    }
    //printf("\n %d",index_of_sum_by_two);
    //printf("\n %d",index_of_sum);
    i=0;


    int answer[2][50];k=0;
    for(;i<index_of_sum_by_two;i++)
    {
        j=index_of_sum_by_two;
        for(;j<index_of_sum;j++)
        {
            if(number_list[i]+number_list[j]==sum)
                {
                 answer[0][k]=number_list[i];
                 answer[1][k]=number_list[j];
                 k++;
                }
        }
    }
    if(k==0)
    {
        printf("No such pair exists");
        return;
    }
    for(j=0;j<k;j++)
    {
        if(j==k-1)
        {printf("%d %d",answer[0][j],answer[1][j]);break;}
        printf("%d %d , ",answer[0][j],answer[1][j]);
    }
}
void max_frequency()
{
    int number_list[50];
    char Ar[100];
    int i=-1;
    char a='a';
    int count=0;
    int k=0;
    while((a=getchar())!='\n')
    {

        if(a==32)
        {
            int j=i;int w=1;int number=0;
            for(;j>=0;j--)
            {
                number=((int)Ar[j]-48)*w+number;
                w=w*10;
            }
            number_list[k]=number;
            k++;
            i=-1;
           // printf("this was the %d wala number \n",k);
        }
        else
        {
            i++;
            Ar[i]=a;
        }

    }
    int j=i;int w=1;int number=0;

    for(;j>=0;j--)
    {
        number=((int)Ar[j]-48)*w+number;
        w=w*10;
    }
    number_list[k]=number;
    int size_of_num_list=k+1;
    k++;
    int copy[k];
    i=0;
    for(i=0;i<k;i++)
    {
        copy[i]=number_list[i];
    }
    //printf("%d \n",copy[0]);
    quickSort(copy,0,k);
    int frequency[2][k];
    //printf("%d \n",number_list[0]);
    //printf("%d \n",copy[0]);
    frequency[0][0]=copy[0];
    frequency[1][0]=1;
    i=1;count=0;
    while(i<=k)
    {
        while(copy[i-1]==copy[i])
        {
            frequency[1][count]=frequency[1][count]+1;
            i++;
        }
        count++;
        frequency[0][count]=copy[i];
        frequency[1][count]=1;
        i++;
    }
    /*int x=0;
    for(;x<count;x++)
    {
        printf("%d %d \n",frequency[0][x],frequency[1][x]);
    }*/
    int answer[2][count];
    int maximum=frequency[1][0];
    answer[0][0]=frequency[0][0];
    answer[1][0]=frequency[1][0];
    k=0;
    //printf("\n \n");
    for(j=1;j<count;j++)
    {
        if(frequency[1][j]>=maximum)
        {
            if(frequency[1][j]>maximum)
            {
                k=0;
                answer[1][k]=frequency[1][j];
                answer[0][k]=frequency[0][j];
                maximum=frequency[1][j];
            }
            else//(frequency[1][j]==maximum)
            {
                k++;
                answer[0][k]=frequency[0][j];
                answer[1][k]=frequency[1][j];
            }
        }
    }
    /*for(i=0;i<k+1;i++)
    {
        printf("%d %d \n",answer[0][i],answer[1][i]);
    }*/

    int answer_final[k+1][2];
    for( i=0;i<k+1;i++)
    {
        answer_final[i][0]=answer[0][i];
        for(j=0;j<size_of_num_list;j++)
        {
            if(answer[0][i]==number_list[j])
            {
                answer_final[i][1]=j+1;
                break;
            }
        }
    }
    //for(i=0;i<k+1;i++)
    //{
    //    printf("%d %d \n",answer_final[0][i],answer_final[1][i]);
    //}
    quickSort2(answer_final,0,k);
    for(i=0;i<k+1;i++)
    {
        printf("%d ",answer_final[i][0]);
    }



}
int main()
{
    //printf("Hello world!\n");
    //check_sum_pairs();
    max_frequency();

    return 0;
}
