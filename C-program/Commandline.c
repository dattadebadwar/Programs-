#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
    printf("Demonstration of command line\n");

    int No1= atoi(argv[1]);
    int No2 =atoi(argv[2]);
    
    int Ans=No1+No2;
    printf("Number of command line argument : %d\n",argc);
    printf("Addition is : %d",Ans);

    return 0;
}


//gcc commandline.c -o Myexe
//Myexe  11 21