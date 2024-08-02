// Company oriented syntax

import java.io.*;

class InputDemo1
{
    public static void main(String arg[])
    { 
        BufferedReader bobj=new BufferedReader(new InputStreamReader(System.in));
        int No1=0,No2=0;
        // Code under jvm observation
        try  
        {
            System.out.println("Enter first Number ");
            No1=Integer.parseInt(bobj.readLine());

            System.out.println("Enter Second Number ");
            No2=Integer.parseInt(bobj.readLine());
        }
        catch(IOException obj)  //catch the exception 
        {

        }
        int Ans=No1+No2;

        System.out.println("Addition Is: "+Ans);
    }    
}
