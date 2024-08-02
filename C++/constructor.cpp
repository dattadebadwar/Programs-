#include<iostream>

using namespace std;

class Demo
{
    public:
        int No1;
        int No2;

        Demo()
        {
            cout<<"Inside default constructor\n";
            No1=0;
            No2=10;
        }
        Demo(int A,int B)
        {
            cout<<"Inside parameterised constructor\n";
            No1=A;
            No2=B;

        }
        Demo(Demo &ref)
        {
            cout<<"Inside copy Constructor \n";
            No1=ref.No1;
            No2=ref.No2;
        }
        ~Demo()
        {
            cout<<"Inside Destructor \n";  //~ - Tilda Operator

        }

        void fun()
        {
            cout<<"Inside Fun \n";
        }
        void gun()
        {
            cout<<"Inside the Gun \n";
        }


};

int main()
{
    cout<<"Inside the Main Function \n";
    
    Demo obj1;
    
    // obj1.fun();
    // obj2.gun();

    cout<<"Value of No1 From obj1 is  :  "<<obj1.No1<<"\n";
    cout<<"Value of No2 From obj1 is  :  "<<obj1.No2<<"\n";

    Demo obj2(11,21);
    cout<<"Value of No1 From obj2 is  :  "<<obj2.No1<<"\n";
    cout<<"Value of No2 From obj2 is  :  "<<obj2.No2<<"\n";

    Demo obj3(obj2);
    cout<<"Value of No1 From obj3 is  :  "<<obj3.No1<<"\n";
    cout<<"Value of No2 From obj3 is  :  "<<obj3.No2<<"\n";
    return 0;
}