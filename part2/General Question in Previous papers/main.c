#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Q[]={0.3,0.7,0.3,0.3,0.8};
    float C[]={0.1,0.2,0.3,0.4,0.5};
    //float M=0.12;
    //int M_compare;
    //M_compare=(int)(101*M);
    int i;
    //int c=sizeof(Q)/sizeof(float);
    //printf("%f \n",M);
    for(i=0;i<sizeof(Q)/sizeof(float);i++)
    {
        float P=Q[i]*C[i];
        if(Q[3]*C[3]==P)printf("Harsh");
        //int j=(int)(100*P);
        //printf("%d \n",j);
       // if(M_compare==j){printf(">You can choose item %d.\n",i);}

    }
    int a=5;int b=10;int c=1;
    if(a&&b>c)
        printf("Harsh12");
        // register short const  f=12;
        const volatile static int f=10;
        //f=13;

        printf("\n %d",f);
          register long unsigned g=10;
          long unsigned Pinkesh=12;
          printf("pinkesh %ld \n",Pinkesh);
        printf("\n %ld",g);
        printf("enter the choice as follows: \na)Harsh\nb)Aniket\nc)anshul\n");
        char r;
        scanf("%c",&r);
        switch(r)
        {
            case'a':printf("Your choice is Harsh");break;
            case'b':printf("Your choice was Aniket");break;
            case'c':printf("Your choice was Anshul");break;
            default:printf("Isse accha tumhe na milega");
        }

       // printf("\n %f",s);
    return 0;
}
