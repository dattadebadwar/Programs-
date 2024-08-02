import java.util.*;

class Coolection2 
{
    public static void main(String arg[])
    {
        Hashtable< String, Integer> hobj=new Hashtable <String, Integer>();

        hobj.put("C programming ",990);
        hobj.put("C++ programming ",1200);
        hobj.put("Java programming ",780);
        hobj.put("Pythone programming ",1650);

        System.out.println("Book price java "+hobj.get("Java Programming"));
        hobj.remove("C++ programming");

        Enumeration eobj=hobj.keys();
        while(eobj.hasMoreElements())
        {
            System.out.println(eobj.nextElement());
        }
    }
}
