//Empty class Contains 1 Bytes Memory 
#include<iostream>

using namespace std;

class Demo
{
    public:
        void fun()
        {
            cout<<"inside fun"<<"\n";

        }
        void gun()
        {
            cout<<"inside gun"<<"\n";

        }
};

int main()
{

    Demo obj;

    cout<<sizeof(obj)<<"\n";

    obj.fun();
    obj.gun();

    return 0;
}