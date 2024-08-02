#include<iostream>

using namespace std;

class Demo
{
    public:
        int A;
        int B;
        const int C;
        const int D;

        Demo() : C(11),D(21) //Member Intialisation List (C,D)//you can add non const member
        {
            A=51;
            B=101;
        }
        Demo(int i,int j,int k, int l) : C(k),D(l) 
        {
            A=i;
            B=j;
        }
        void Fun()
        {   
            A++;
            B++;
            //C++;   //NA
            //D++;   //NA
        }
        void Gun() const //Write syntax 
        {
            //A++;     //NA
            //B++;     //NA
            //C++;   //NA
            //D++;   //NA
        }
        


};
int main()
{
   
    Demo obj1(11,21,51,101);  //Value user kadun ghevun intialise karu shakta
    const Demo obj2(1,2,3,4);
    obj1.Fun();
    obj1.Gun();

    // obj2.Fun();
    obj2.Gun();

    return 0;
}