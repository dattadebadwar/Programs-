//How to take input In Java This Porgram (non Buffered type)


import java.util.*;

// import org.xml.sax.SAXNotSupportedException;

class Input
{
    public static void main(String Arg[])
    {
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter First Number : ");
        int iNo1=sobj.nextInt();

        System.out.println("Enter Second Number : ");
        int iNo2=sobj.nextInt();

        int iAns=0;
        iAns=iNo1+iNo2;
        System.out.println("Addition is : "+iAns);
    }
}
/*
class Stats with capital letter
method starts with small Letter

 Datatype    |     Methode from Scanner class
 ------------|--------------------------------    
 boolean     |      nextBoolean();
 byte        |      nextByte();
 short       |      nextShort();
 int         |      nextInt();
 float       |       nextFloat();
 double      |       nextDouble();
 long        |       nexgLong();
 string      |      nextLine();
 charechter  |      No in this method 
 */