#include<stdio.h>

struct Demo
{
    int i;
    float f;
    double d;
};

union Hello
{
    
    int i;
    float f;
    double d;
   
};

union ID_Details
{
    int Pan_no;
    int Aadhar_no;
    int Passport_no;

};


int main()
{
    struct Demo dobj;
    union Hello hobj;

    printf("Sise of structure is : %d\n ",sizeof(dobj));
    printf("Sise of union is : %d\n ",sizeof(hobj));

    dobj.i=11;
    dobj.f=90.90;
    dobj.d=90.9999;

    hobj.i=21;

    return 0;
}