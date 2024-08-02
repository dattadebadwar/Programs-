
class Marvellous 
{
    public int No1;
    public int No2;
    public Marvellous()
    {
        System.out.println("Inside default constructor");
        No1=0;
        No2=0;
    }
    public Marvellous(int a, int b)
    {
        System.out.println("Inside the parameterised constructor ");
        No1=a;
        No2=b;
    }
    protected void finlaise()  //protected is compuslory
    {
        System.out.println("Inside the Filise Method ");
    }
}

class finalisedemo 
{
    public static void main(String A[])
    {
        Marvellous mobj1=new Marvellous();
        Marvellous mobj2=new Marvellous(11,21);
        
        mobj1=null; 
        mobj2=null;

        System.gc();

        // System.out.println("finlaise of the mobj : "+mobj.());
    }
}
