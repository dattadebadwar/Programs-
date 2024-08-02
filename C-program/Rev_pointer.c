#include<stdio.h>

int main()
{
    int no1=10;
    int *value=&no1;

    float Data=90.9;
    float *fptr=&Data;

    char ch='A';
    char *cptr=&ch;

    

    printf("No1 : %d\n",no1);
    printf("&No1 : %d\n",&no1);
    printf("value : %d\n",value);
    printf("&value : %d\n",&value);
    printf("*value : %d\n",*value);

   
    return 0;
}