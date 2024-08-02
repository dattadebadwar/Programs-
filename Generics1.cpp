#include<iostream>
// template<class T> - One of the most important topic 
// Interview important Que
using namespace std;
template<class T>  // Template header (T- Template argument )
T Addition(T i, T j)
{
    T result;
    result=i+j;
    return result;
}
int main()
{
    int i;
    float f;
    double d;

    i= Addition(10,11);
    cout<<i<<"\n";
    f=Addition(10.7f,89.5f);
    cout<<f<<"\n";
    d=Addition(10.8,70.8);
    cout<<d<<"\n";
    return 0;
}