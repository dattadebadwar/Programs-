

class Marvellous implements Runnable
{
    int i=0;
    public void run()
    {
        for(int i=1; i<100000; i++);
        {
            System.out.println(i);
        }
    }
}
class MultiThreading2
{
    public static void main(String A[]) 
    {
        Marvellous mobj1=new Marvellous();    
        Marvellous mobj2=new Marvellous();
        
        Thread t1=new Thread(mobj1);
        Thread t2=new Thread(mobj2);

        t1.start();
        t2.start();
    }    
}
