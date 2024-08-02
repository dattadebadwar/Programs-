#include<iostream>

using namespace std;

class Demo
{

    public:
        int A, B;


        Demo()
        {
            cout<<"Inside default constructor"<<"\n";
            
        }
         Demo(int i , int j)
        {
            cout<<"Inside Parameterised constructor"<<"\n";
            
        }
        ~Demo()
        {
            cout<<"Inside Destructor"<<"\n";

        }
};

int main()
{
    cout<<"Inside Main"<<"\n";

    Demo obj1;
    Demo obj2(11,21);

    Demo *p=new Demo();
    Demo *q=new Demo(11,21);

    delete p;
    delete q;

    cout<<"End of Main"<<"\n";

    return 0;
}