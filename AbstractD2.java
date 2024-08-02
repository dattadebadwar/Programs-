abstract class RBI{
    public abstract float CalculateROI();


    public void DisplayRules()
    {
        System.out.println("You have to submit KYC ");
        System.out.println("Min Balance 1000");
    }
}

class SBI extends RBI{
    public float CalculateROI()
    {
        return 5.7f;
    }
}
class BOM extends RBI{
    public float CalculateROI()
    {
        return 7.7f;
    }
}

class AbstractD2
{
    public static void main(String arg[])
    {
        SBI sobj=new SBI();
        BOM bobj=new BOM();

        sobj.DisplayRules();
        bobj.DisplayRules();

        float fRet=0.0f;
        fRet=sobj.CalculateROI();
        System.out.println("ROI of SBI is: "+fRet);

        fRet=bobj.CalculateROI();
        System.out.println("ROI of BOM is "+fRet);
    }
}
