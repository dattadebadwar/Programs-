// //How to Design Class Basic
// // Single Level Inheritanc 

#include<iostream>

using namespace std;

//Parents Class /base class  
class Demo
{
    public:
        int A,B;


        Demo()
        {
            A=11;
            B=21;
            cout<<"Inside Demo constructor"<<"\n";
        }
        ~Demo()
        {
            cout<<"Inside Demo Destructor"<<"\n";
        }
        void fun()
        {
            cout<<"inside fun of Demo"<<"\n";
        }
};
//Child Class  / Derived class 
class Hello : public Demo //Inheritance Hello To Demo  (in Java : class Hello extends Demo)
{
    public :
        int X,Y;

        Hello()
        {
            X=51;
            Y=101;
            cout<<"Inside Hello Constructor "<<"\n";
        }
        ~Hello()
        {
            cout<<"Inside Hello Destructor "<<"\n";
        }
        void gun()
        {
            cout<<"Inside gun of Hello"<<"\n";
        }
};

// int main()
// {
//     Hello hobj;

//     // hobj.fun();
//     // hobj.gun();

//     cout<<hobj.A<<"\n";
//     cout<<hobj.B<<"\n";
//     cout<<hobj.X<<"\n";
//     cout<<hobj.Y<<"\n";
    

//     return 0;
// }

// class Demo
// {
//     public:
//         void fun(int *p)
//         {
//             cout<<"First Defination ";
//         }
//         void fun(float *p)
//         {
//             cout<<"Second";
//         }
//         void fun(int no)
//         {
//             cout<<"Third";
//         }
// };

// int maint()
// {
//     int no=11;
//     float f=3.14;

//     Demo obj();

//     obj.fun(no);
//     obj.fun(&no);
//     obj.fun(&f);

//     return 0;
// }