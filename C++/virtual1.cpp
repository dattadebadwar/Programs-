
#include<iostream>

using namespace std;

class Base
{
    public:
        int A,b;
        void Fun()
        {
            cout<<"Inside Fun Base"<<"\n";
        }
         void Gun()
        {
            cout<<"Inside Gun Base"<<"\n";
        }
         void Sun()
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
         void Gun()
        {
            cout<<"Inside Gun Derived"<<"\n";
        }
         void Sun()
        {
            cout<<"Inside Sun Derived"<<"\n";
        }

};

int main()
{
    // Derived dobj;

    // dobj.Fun();
    // dobj.Gun();
    // dobj.Sun();
    cout<<"Size of Base : "<<sizeof(Base)<<"\n";
    cout<<"Size of Derived : "<<sizeof(Derived)<<"\n";
    Base *bp=new Base;
    Derived *dp=new Derived;

    Base *bp1=new Derived;
    // Derived *dp1=new Base;-- Not Allowed



    return 0;
}