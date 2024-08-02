//How to Design Class Basic
// Multi level Inheritanc 

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
class PPA : public Hello 
{
    public :
        int I,J;

        PPA()
        {
            I=111;
            J=121;
            cout<<"Inside PPA Constructor "<<"\n";
        }
        ~PPA()
        {
            cout<<"Inside PPA Destructor "<<"\n";
        }
        void sun()
        {
            cout<<"Inside Sun of PPA"<<"\n";
        }
};

int main()
{
    cout<<"Inside Main"<<"\n";
    cout<<"Size of Demo : " <<sizeof(Demo)<<"\n";
    cout<<"Size of Hello : " <<sizeof(Hello)<<"\n";
    cout<<"Size of PPA : " <<sizeof(PPA)<<"\n";
    PPA hobj;

    hobj.fun();
    hobj.gun();
    hobj.sun();


    cout<<hobj.A<<"\n";
    cout<<hobj.B<<"\n";
    cout<<hobj.X<<"\n";
    cout<<hobj.Y<<"\n";
    cout<<hobj.I<<"\n";
    cout<<hobj.J<<"\n";

    cout<<"End Of Main"<<"\n";
    

    return 0;
}