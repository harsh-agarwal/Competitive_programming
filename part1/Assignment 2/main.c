
#include<stdio.h>
#include<stdlib.h>


//using namespace std;
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

struct reverse_odd
{
    int mid_index;
    int length;
    struct reverse_odd *next;
};
typedef struct reverse_odd new_reverse_odd;
struct word
{
    char a;
    int actual_value;
    struct word *next;
};

typedef struct word new_name;

struct list
{
    int value;
    struct list *next;
};
typedef struct list num_list;



int todo(int Ar[],int p,int r)
{
    int x;int i=p-1;
    x=Ar[r];int j;
    for( j=p;j<r;j++)
    {
        if(Ar[j]<=x)
            {
                i=i+1;
                int temp=Ar[j];
                Ar[j]=Ar[i];
                Ar[i]=temp;
            }
    }
    int temp=Ar[i+1];
    Ar[i+1]=Ar[r];
    Ar[r]=temp;
    return(i+1);
}
void quickSort(int Ar[],int p,int r)
{

    if(p>=r)return;
    int q=todo(Ar,p,r);

        quickSort(Ar,p,q-1);
        quickSort(Ar,q+1,r);
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
        j=index_of_sum_by_two+1;
        for(;j<index_of_sum+1;j++)
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

void check_anagram()
{

    new_name *head_one=(new_name*)malloc(sizeof(new_name));
    char b;
    scanf("%c",&b);
    head_one->a=b;
    head_one->next=NULL;
    struct word *tail_one;
    tail_one=head_one;
    int count1=0;
    while(((int)(tail_one->a)!=10))
    {
        new_name *temp1=(new_name*)malloc(sizeof(new_name));
        //word *temp1=new word;
        (temp1->a)=getchar();
        if((int)(temp1->a)==10)break;
        tail_one->next=temp1;
        temp1->next=NULL;
        tail_one=temp1;
        count1++;
    }
    //cout<<"Harsh1";
    new_name *head_two=(new_name*)malloc(sizeof(new_name));
    head_two->a=getchar();
    head_two->next=NULL;
    struct word *tail_two;
    tail_two=head_two;
    int count2=0;
    while(((int)(tail_two->a)!=10))
    {
        new_name *temp2=(new_name*)malloc(sizeof(new_name));
        //word *temp2=new word;
        (temp2->a)=getchar();
        if((int)(temp2->a)==10)break;
        tail_two->next=temp2;
        temp2->next=NULL;
        tail_two=temp2;
        count2++;
    }
    if(count1!=count2)
    {
        printf("False");
        return;
    }
    int first_word[count1];int i=0;
    while(head_one!=NULL)
    {
        first_word[i]=(int)(head_one->a);
        new_name *temp=(new_name*)malloc(sizeof(new_name));
        //word *temp=new word;
        temp=head_one;
        head_one=head_one->next;
        free(temp);
        i++;
    }
    i=0;
    int second_word[count2];
    while(head_two!=NULL)
    {
        second_word[i]=(int)(head_two->a);
        new_name *temp=(new_name*)malloc(sizeof(new_name));
        //word *temp=new word;
        temp=head_two;
        head_two=head_two->next;
        free(temp);
        i++;
    }
    quickSort(first_word,0,count1);
    quickSort(second_word,0,count2);
    i=0;
    for(;i<count1;i++)
    {
        if(first_word[i]!=second_word[i])
            break;
    }
    if(i==count1)
        printf("True");
    else
        printf("False");
}
void longest_pallindrome()
{
    new_name *head_one=(new_name*)malloc(sizeof(new_name));
    char b;
    scanf("%c",&b);
    head_one->a=b;
    head_one->next=NULL;
    struct word *tail_one;
    tail_one=head_one;
    int count1=0;
    while(((int)(tail_one->a)!=10))
    {
        new_name *temp1=(new_name*)malloc(sizeof(new_name));
        //word *temp1=new word;
        (temp1->a)=getchar();
        if((int)(temp1->a)==10)break;
        tail_one->next=temp1;
        temp1->next=NULL;
        tail_one=temp1;
        count1++;
    }
    // printf("Harsh1");
    int first_word[count1];int i=0;
    while(head_one!=NULL)
    {
        first_word[i]=(int)(head_one->a);
        new_name *temp;
        //word *temp=new word;
        temp=head_one;
        head_one=head_one->next;
        free(temp);
        i++;
    }
    //printf("Harsh12");
    //printf("Harsh123");
    new_reverse_odd *head_odd=(new_reverse_odd*)malloc(sizeof(new_reverse_odd));
    head_odd->next=NULL;
    head_odd->length=-1;
    new_reverse_odd *tail_odd;
    tail_odd=head_odd;
    i=1;
    int k=0;
    for(;i<count1;i++)
    {
        k=0;
       if(first_word[i-1]==first_word[i+1])
       {
           int j=i;
           head_odd->mid_index=i;head_odd->length=1;
           k=1;
           while(first_word[j-k]==first_word[j+k])
           {
                if(j-k<0 || j+k>=count1)
                break;
                head_odd->length=head_odd->length+2;
                k++;
           }
           head_odd->next=NULL;
       }
       if(k!=0)break;
    }
    if(k!=0)
        {
            i=head_odd->mid_index+1;
            for(;i<count1-1;i++)
            {
                k=0;
                if(first_word[i-1]==first_word[i+1])
                {
                new_reverse_odd *temp=(new_reverse_odd*)malloc(sizeof(new_reverse_odd));
                int j=i;
                temp->mid_index=i;temp->length=1;
                tail_odd->next=temp;
                temp->next=NULL;
                tail_odd=temp;
                k=1;
                while(first_word[j-k]==first_word[j+k])
                {
                if(j-k<0 || j+k>=count1)
                break;
                temp->length=temp->length+2;
                k++;
                }
            }

        }
    }
    i=1;
    new_reverse_odd *head_even=(new_reverse_odd*)malloc(sizeof(new_reverse_odd));
    new_reverse_odd *tail_even;
    head_even->length=-1;
    head_even->next=NULL;
    //k=0;
    for(;i<count1;i++)
    {
        k=0;
        if(first_word[i-1]==first_word[i])
        {
           int j=i;
           head_even->mid_index=i;head_even->length=2;
           k=1;
           while(first_word[j-k-1]==first_word[j+k])
           {
               if(j-k-1<0 || j+k>=count1)
                break;
               head_even->length=head_even->length+2;
               k++;
           }
        }
        if(k!=0)break;
    }
    //printf("Harsh1 \n");
    if(k!=0)
    {
        i=head_even->mid_index+1;
        for(;i<count1;i++)
        {
            if(first_word[i-1]==first_word[i])
            {
                new_reverse_odd *temp=(new_reverse_odd*)malloc(sizeof(new_reverse_odd));
                int j=i;
                temp->mid_index=i;
                temp->length=2;
                tail_even->next=temp;
                temp->next=NULL;
                tail_even=temp;
                k=1;
                while(first_word[j-k-1]==first_word[j+k])
                {
                    if(j-k-1<0 || j+k>=count1)
                    break;
                    temp->length=temp->length+2;
                    k++;
                }
            }
        }
    }
    //printf("Harsh2 \n");
    new_reverse_odd *temp;
    temp=head_odd;
    int maximum=head_odd->length;
    int mid_index_odd=head_odd->mid_index;
    while(temp!=NULL)
    {
        if(temp->length>maximum)
        {
            maximum=temp->length;
            mid_index_odd=temp->mid_index;
        }
        temp=temp->next;
    }
    //printf("Harsh3 \n");
    temp=head_even;
    int mid_index_even;
    int flag=0;
    while(temp!=NULL)
    {
        if(temp->length>maximum)
        {
            maximum=temp->length;
            mid_index_even=temp->mid_index;
            flag=1;
        }
        temp=temp->next;
    }
    //printf("Harsh4 \n");
    if(flag==1)
    {
        i=mid_index_even-(maximum/2);
        for(;i<mid_index_even+(maximum/2);i++)
        {
            printf("%c",(char)first_word[i]);
        }
    }
    else
    {
        i=mid_index_odd-(maximum/2);
        for(;i<mid_index_odd+(maximum/2)+1;i++)
            printf("%c",(char)first_word[i]);
    }
}
void find_first_non_repeat()
{
    char Ar[100];
    char a='a';
    int i=0;
    while(  (a=getchar())!=10  )
    {
        Ar[i]=a;
        i++;
    }
    int size=i;
    int flag=1;int j;i=0;
    while(flag==1)
    {
        flag=0;
        for(j=0;j<size;j++)
        {
            if(Ar[i]==Ar[j] && i!=j)
            {
                flag=1;
                break;
            }
        }
        i++;
        if(i>=size)break;
    }
    printf("%c",Ar[i-1]);


}

int main()
{
    //check_anagram();
    //longest_pallindrome();
    //max_frequency();
    find_first_non_repeat();
    //check_sum_pairs();
    /*printf("Please enter the choice according to the task to be done \n1)Anagram check \n2)Find the first non repeated character \n3)Find the Longest palindrome in a given string \n4)Find all pairs in an array whose sum is equal to the given pairs \n5)Find the most frequent input in an array");
    printf("\n");
    int a;
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        check_anagram();
        break;
    case 2:
        find_first_non_repeat();
        break;
    case 3:
        longest_pallindrome();
        break;
    case 4:check_sum_pairs();
        break;
    case 5:max_frequency();
        break;
    default:printf("enter a valid choice");
    }*/


    return 0;

    }

    //longest_pallindrome();
    //check_pairs();



