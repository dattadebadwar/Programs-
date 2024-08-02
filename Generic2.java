// For Generic Programming <T> is in java 
// You can replase <_> which letter you want 
// This is method code
class Generic2
{
    public static<T> void Display(T Arr[])
    {
        for(T no:Arr)
        {
            System.out.println(no);
        }
    }

    public static void main(String Arg[]) 
    {
        Integer A[]={10,20,30,40};
        Float B[]={50.1f,60.3f,70.2f};
        Double D[]={50.1,60.33,70.25,80.25};
        

        Display(A);
        Display(B);
        Display(D);

    }
}