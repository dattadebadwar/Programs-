

class Commandline
{
    public static void main(String Arg[])
    {
        System.out.println("Demonstration of commandline");

        int No1=Integer.parseInt(Arg[0]);
        int No2=Integer.parseInt(Arg[0]);

        int Ans=No1+No2;
        System.out.println("Number of command arguments: "+Arg.length);
        System.out.println("Addition is : "+Ans);
    }
}


//javac Commandline.java
//java Command 11 21 