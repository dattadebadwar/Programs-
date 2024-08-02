import java.io.*;

class RandomAccess 
{
    public static void main(String A[]) throws Exception 
    { 
       RandomAccessFile fobj =new RandomAccessFile("Infosysteams.txt","rw");

       fobj.writeUTF("ABCDEFGHIJ");//Unicode Transformation Format 
       fobj.seek(0);
       System.out.println("Data From file : "+fobj.readUTF());

       fobj.seek(5);
       fobj.writeUTF("****");

       fobj.seek(0);
       System.out.println("Data From file : "+fobj.readUTF());

    }
}
