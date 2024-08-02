// This is topic which is pending in the C++ its 
// Continued in this file 

#include<stdio.h>
#include<iostream>

//  Application for specific programming - Beacuse 
// for all the data type there is specific function
using namespace std;

int AdditionI(int i, int j)
{
    int result;
    result=i+j;
    return result;
}
int AdditionF(float i, float j)
{
    float result;
    result=i+j;
    return result;
}
int AdditionD(double i, double j)
{
    double result;
    result=i+j;
    return result;
}


int main()
{
    int i;
    float f;
    double d;

    i= AdditionI(10,11);
    cout<<i<<"\n";
    f=AdditionF(10.7f,89.5f);
    cout<<f<<"\n";
    d=AdditionD(10.8,70.8);
    cout<<d<<"\n";


    return 0;
}