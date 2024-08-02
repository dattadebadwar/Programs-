#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{
    char Name[30];
    int FD=0;
    printf("File name that you want to create : \n");
    scanf("%s",Name);

    FD =creat(Name,0777);
    if(FD==-1)
    {
        printf("UNable to crete file \n");
    }
    else{
        printf("File is Succesfully created \n");
    }

    return 0;
}