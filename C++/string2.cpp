#include<iostream>


using namespace std;

int strlenX(char str[])  //int strlrnX(char * Str)
{
    int iCnt=0;

    while(*str != '\0')
    {
        iCnt++;
        str++;

    }
    return iCnt;


}

int main()
{

    char Arr[20];
    int iRet=0;

    cout<<"Enter your First Name: "<<"\n";
    cin>>Arr;

    iRet=strlenX(Arr);

    cout<<"Length of name is : "<<iRet<<"\n";

    return 0;
}