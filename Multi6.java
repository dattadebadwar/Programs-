import java.util.concurrent.ThreadPoolExecutor.DiscardPolicy;

class Marvellous extends Thread
{

    public void run()
    {
        Display();
        
    }
}



class Multi6 
{
    public static void main(String a[]) 
    {
        Marvellous mobj1=new Marvellous();    
        Marvellous mobj2=new Marvellous();
        
        Thread t1=new Thread(mobj1);
        Thread t2=new Thread(mobj2);

        t1.start();
        t2.start();
    }    
}
