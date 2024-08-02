import java.util.Scanner;

class ExceptionDemoX
{
    public static void main(String Arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int No1=0,No2=0;
        float Ans=0.0f;

        System.out.println("Enter First Number : ");
        No1=sobj.nextInt();

        System.out.println("Enter Second Number : ");
        No2=sobj.nextInt();

        try
        {
            System.out.println("Inside the try block");
            Ans=No1/No2;
        }
        catch(ArithmeticException obj)
        {
            System.out.println("Inside Catch block");
            System.out.println("Exception occured & code is inside catch block : "+obj);
        }
        finally
        {
            System.out.println("Code is inside Finally Block ");
            System.out.println("Division is : "+Ans);
        }
        
    }
}
