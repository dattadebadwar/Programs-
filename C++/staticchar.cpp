#include<iostream>

using namespace std;

class Demo
{
    public: 
        int A, B;
        static int x,y;

        Demo()
        {
            A=0;
            B=0;

        };

};

int Demo :: x=10;
int Demo :: y=20;

int main()
{
    cout<<"Value of X : "<<Demo::x<<"\n";
    cout<<"Value of X : "<<Demo::y<<"\n";

    Demo obj1;
    Demo obj2;

    cout<<"Value of A from obj1 : "<<obj1.A<<"\n";
    cout<<"Value of A from obj2 : "<<obj2.A<<"\n";

    obj1.A++;

    cout<<"Value of A from obj1 : "<<obj1.A<<"\n";
    cout<<"Value of A from obj2 : "<<obj2.A<<"\n";

    cout<<"Size of demo object is : "<<sizeof(obj1)<<"\n";
    
    return 0;
}