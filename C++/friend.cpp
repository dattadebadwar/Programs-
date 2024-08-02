#include<iostream>

using namespace std;

class Hello
{
    public:
        void Gun();
};

class Marvellous
{
    public:
        void sun();
        void run();
};

class Demo
{
    public:
        int A;
    private:
        int B;
    protected:
        int C;
    

    public:
        Demo(int i, int j,int k)
        {
            A=i;
            B=j;
            C=k;
        }
    friend void Fun();
    friend void Hello :: Gun();
    friend class Marvellous;
};

void Hello :: Gun()
{
    Demo obj(11,21,51);
    cout<<"Value of A : "<<obj.A<<"\n";
    cout<<"Value of B : "<<obj.B<<"\n";
    cout<<"Value of C : "<<obj.C<<"\n";
}

void Marvellous ::  sun()
{
    Demo obj(11,21,51);
    cout<<"Value of A : "<<obj.A<<"\n";
    cout<<"Value of B : "<<obj.B<<"\n";
    cout<<"Value of C : "<<obj.C<<"\n";
}

void Marvellous ::  run()
{
    Demo obj(11,21,51);
    cout<<"Value of A : "<<obj.A<<"\n";
    cout<<"Value of B : "<<obj.B<<"\n";
    cout<<"Value of C : "<<obj.C<<"\n";
}

void Fun()//Naked Function 
{   
    Demo obj(11,21,51);
    cout<<"Value of A : "<<obj.A<<"\n";
    cout<<"Value of B : "<<obj.B<<"\n";
    cout<<"Value of C : "<<obj.C<<"\n";
}

int main()
{
    Fun();
    Hello hobj;
    hobj.Gun();

    Marvellous mobj;
    mobj.sun();
    mobj.run();


    return 0;
}