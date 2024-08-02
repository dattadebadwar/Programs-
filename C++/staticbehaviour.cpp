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

        }
        void fun()
        {
            cout<<"Inside the non static function fun "<<"\n";
            cout<<"Value of A : "<<this->A<<"\n";
            cout<<"Value of B : "<<this->B<<"\n";
            cout<<"Value of x : "<<x<<"\n";
            cout<<"Value of y : "<<y<<"\n";

        }
        static void gun()
        {
            cout<<"Inside the static fucntion gun "<<"\n";
            cout<<"Value of x : "<<x<<"\n";
            cout<<"Value of y : "<<y<<"\n";

        }

};

int Demo :: x=10;
int Demo :: y=20;

int main()
{
    Demo::gun();
    Demo obj;

    obj.fun();  //fun(&obj)

    obj.gun();   // it should not be use due to NON static 



    return 0;
}