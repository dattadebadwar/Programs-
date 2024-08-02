import java.io.*;



class CreateFile 
{
    public static void main(String A[]) throws Exception 
    { 
        File fobj=new File("Infosysteams.txt");

        if(fobj.createNewFile())
        {
            System.out.println("File Successfully Created ");
        }
        else
        {
            System.out.println("Unable to create the file ");
        }
    }
}
