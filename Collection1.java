import java.util.*;

class Collection1 
{
    public static void main(String arg[])
    {
        Stack<Integer> lobj =new Stack<Integer>();   // LinkedList at place of ArrayList
        //(Linkedlilst ,vector,arraylist,stack)
        lobj.push(11);
        lobj.push(21);
        lobj.push(51);
        lobj.push(101);

        System.out.println("Elements are : "+lobj);

        System.out.println("Poped elements is : "+ lobj.pop());

        System.out.println("Elements are : "+lobj);
       
    }
}
