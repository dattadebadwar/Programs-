#include<iostream>

using namespace std;

bool CheckEven(int No)
{
    if((No%2)==0)
    {
        return true;
    }
    else{
        return false;
    }

}
int main()
{
    int  Value =0;
    bool bRet;

    cout<<"Enter Number : \n";
    cin>>Value;

    bRet=CheckEven(Value);

    if(bRet==true)
    {
        cout<<"It is Even number \n";

    }
    else
    {
        cout<<"It is Odd Number \n";
    }

    return 0;
    
}