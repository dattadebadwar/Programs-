#include<iostream>
using namespace std;
template<class T>
class MarvellousArray
{
    private:
        T *Arr;
        int iSize;

    public:
        
        MarvellousArray(int Length)
        {
            cout<<"Inside Constructor"<<"\n";
            iSize=Length;
            Arr=new T[iSize];
        }
        
        ~MarvellousArray()
        {
            cout<<"Inside Distructor"<<"\n";
            delete []Arr;
        }
        
        void Accept()
        {
            cout<<"Enter The values "<<"\n";
            for(int i=0; i<iSize; i++)
            {
                cin>>Arr[i];

            }
        }
       
        void Display()
        {
            cout<<"Elements of array are  : "<<"\n";
            for(int i=0; i<iSize; i++)
            {
                cout<<Arr[i]<<"\n";
            }
        }
        
        T Addition()
        {
            T iSum=0;
            for(int i=0; i<iSize; i++)
            {
                iSum =iSum+Arr[i];

            }
            return iSum;
        }
};

int main()
{

    MarvellousArray <int>mobj1(5);
    
    mobj1.Accept();
    mobj1.Display();

    MarvellousArray <float>mobj2(4);
    mobj2.Accept();
    mobj2.Display();

    int iRet=0;
    iRet=mobj1.Addition();
    cout<<"Additoin is mobj1 : "<<iRet<<"\n";

    float fRet=0.0f;
    fRet=mobj2.Addition();
    cout<<"Additoin is mobj2 : "<<fRet<<"\n";

    return 0;
}
