#include<iostream>

using namespace std;

class base
{
    public:
        int i;
        float f;
        double d;

    void fun()
    {
        cout<<"hi"<<"\n";
    }
    void gun()
    {
        cout<<"by"<<"\n";
    }
};

class derived : public base{
    public:
    int i;
    double d;

    void sun()
    {
        cout<<"why"<<"\n";
    }
};

int main()
{
    base bobj;
    derived dobj;

    return 0;
}

