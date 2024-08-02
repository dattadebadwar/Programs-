class Base
{
    public int A;
    public int B;

    public Base()
    {
        System.out.println("Inside the Base Constructor");
        this.A=11;
        this.B=21;
    }
    public void fun()
    {
        System.out.println("Inside Base Fun");
    }
}

class Derived extends Base   //class Derived : public Base
{
    public int X;
    public int Y;

    public Derived()
    {
        System.out.println("Inside the Derived");
        this.X=51;
        this.Y=101;
    }
    public void gun()
    {
        System.out.println("Inside Derived gun");
    }
}
class DerivedX extends Derived
{
    public int Z;
    public DerivedX()
    {
        System.out.println("Inside Derivedx Constructor");
        this.Z=111;
    }
}

class Hirarcalin 
{
    public static void main(String Arg[])
    {
        DerivedX dobj=new DerivedX();    //No casting
        
        dobj.fun();
      


       System.out.println(dobj.A);
       System.out.println(dobj.B);
       
       System.out.println(dobj.Z);
    }
}
