#include<iostream>

using namespace std;


class Demo
{
    public:
        int Addition(int No1, int No2)
        {
            cout<<"Addition of 2 integers "<<"\n";\
            return No1+No2;
        }

        float Addition(float No1, float No2)
        {
            cout<<"Addition of 2 Float "<<"\n";
            return No1+No2;
        }


};


int main()
{
    Demo obj;
    int iRet=obj.Addition(10,11);
    cout<<"Addition is integer is  : "<<iRet<<"\n";

    

    float fRet=obj.Addition(10.11f,20.16f);
    cout<<"Addition is float is  : "<<fRet<<"\n";

    return 0;
}