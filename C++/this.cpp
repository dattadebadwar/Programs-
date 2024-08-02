#include<iostream>

using namespace std;

class Demo
{
        public:
        int No1;
        int No2;

        Demo(int i, int j)
        {
            No1=i;
            No2=j;
        }
   
       
        int Fun(int A, int B)
        {
            

        }
        int Gun(int A)
        {

        }


};
int main()
{
    Demo obj1(11,21);
    Demo obj2(51,101);


    obj1.Fun(10,20);    //Converted in C Like (Fun(&obj1,11,21))
    obj2.Gun(10);       //Converted in C Like (Gun(&obj2,11))
   
   

   
    return 0;
}