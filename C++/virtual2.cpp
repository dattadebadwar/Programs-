
#include<iostream>

using namespace std;

class Base
{
    public:
        int A,B;
        virtual void Fun()
        {
            cout<<"Inside Fun Base"<<"\n";
        }
        virtual void Gun()
        {
            cout<<"Inside Gun Base"<<"\n";
        }
        virtual void Sun()
        {
            cout<<"Inside Sun Base"<<"\n";
        }


};

class Derived : public Base
{
    public:
        int X,Y;
        void Fun()
        {
            cout<<"Inside Fun Derived"<<"\n";
        }
        virtual void Sun()
        {
            cout<<"Inside Sun Derived"<<"\n";
        }
        virtual void Run()
        {
            cout<<"Inside Run Derived"<<"\n";
        }

};

int main()
{
    cout<<"Size of Base : "<<sizeof(Base)<<"\n";
    cout<<"Size of Derived : "<<sizeof(Derived)<<"\n";
    Base *bp=new Derived;  //upcasting

    bp->Fun();
    bp->Gun();
    bp->Sun();
   // bp->Run();
    

    return 0;
}