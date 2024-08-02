#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{
    char Name[30];
    int FD=0;
    char Data[30]={'\0'};  

    printf("File name that you want to open : \n");
    scanf("%s",Name);

    FD=open(Name, O_RDONLY);
    if(FD==-1)
    {
        printf("Unable to open file \n");
        return -1;
    }
    else
    {
        printf("File is succesfully opened \n");
    }

    lseek(FD,9,SEEK_SET);

    read(FD,Data,10);


    printf("Data From file is :  \n");
    write(1,Data,10);
    close(FD);

    return 0;
}