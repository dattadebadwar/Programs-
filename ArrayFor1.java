import java.util.*;

class ArrayFor1
{
    public static void main(String Arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the size of Array : ");
        int iSize=sobj.nextInt();

        int Arr[]=new int[iSize];

        System.out.println("Enter the elements : ");
        int iCnt=0;

        for(iCnt=0; iCnt<iSize; iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();
        }

        // Arr[0]=sobj.nextInt();
        // Arr[1]=sobj.nextInt();
        // Arr[2]=sobj.nextInt();
        // Arr[3]=sobj.nextInt();
        System.out.println("Elements of Arraya are : ");
        for(iCnt=0; iCnt<iSize; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
        // System.out.println(Arr[0]);
        // System.out.println(Arr[1]);
        // System.out.println(Arr[2]);
        // System.out.println(Arr[3]);
    }        
}