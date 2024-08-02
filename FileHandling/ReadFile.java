import java.io.*;

class ReadFile 
{
    public static void main(String A[]) throws Exception 
    { 
        FileInputStream fobj=new FileInputStream("Infosysteams.txt");
        
        int i=0;

        while((i=fobj.read())!= -1)
        {
            System.out.print((char)i);
        }
        fobj.close();
    }
}
