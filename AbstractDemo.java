
abstract class RBI
{
    public abstract float CalaulateROI();    //abstract method 

    public void DisplayRules()   //concrete method 
    {   
        System.out.println("You have to submit KYC ");
        System.out.println("Minimum balance is 10,000/-");
    }
}
class SBI extends RBI
{
    public float CalculateROI()
    {
        return 5.7f;
    }
}
class BOM extends RBI
{
    public float CalculateROI()
    {
        return 7.7f;
    }
}

class AbstractDemo
{
    public static void main(String Arg[])
    {
        //RBI robj=new RBI();


        SBI sobj=new SBI();
        BOM bobj=new BOM();

        sobj.DisplayRules();
        bobj.DisplayRules();

        float fRet=0.0f;
        fRet=sobj.CalaulateROI();
        System.out.println("ROI of sbi is : "+fRet);

        fRet=bobj.CalaulateROI();
        System.out.println("ROI of bom is : "+fRet);
    }
}


