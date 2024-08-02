
class Student implements Cloneable
{
    public String name;
    public int Markes;
    public int Age;


    public Student(String str, int a, int b)
    {
        this.name=str;
        this.Markes=a;
        this.Age=b;
    }

    public Object clone() throws CloneNotSupportedException
    {
        return super.clone();
    }
}

class CloneDemo 
{
    public static void main(String A[])
    {
        try
        {
            Student obj1=new Student("Amit", 87, 27);
            Student obj2=(Student)obj1.clone();
            
            System.out.println("Name : "+obj1.name);
            System.out.println("marks : "+obj1.Markes);
            System.out.println("Age : "+obj1.Age);

            System.out.println("Name : "+obj2.name);
            System.out.println("marks : "+obj2.Markes);
            System.out.println("Age : "+obj2.Age);

        }
        catch(Exception obj)
        {

        }
        
    }
}
