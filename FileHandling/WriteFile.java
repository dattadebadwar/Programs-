import java.io.*;



class WriteFile 
{
    public static void main(String A[]) throws Exception 
    { 
        FileOutputStream fobj= new FileOutputStream("Infosysteams.txt");

        String str ="India is my Country";

        byte Arr[]=str.getBytes();
        fobj.write(Arr);
        fobj.close();
    }
}
