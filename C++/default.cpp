#include<iostream>

using namespace std;


float Area(float Radius, float PI=3.14f)
{

    float ans=0.0f;

    ans=PI *Radius*Radius;

    return ans;
}
int main()
{  
    float R=0.0f;
    float fRet=0.0f;
    cout<<"Enter the radious : "<<"\n";
    cin>>R;

    fRet=Area(R,3.14f);

    cout<<"Area of circular is : "<<fRet<<"\n";

    return 0;
}