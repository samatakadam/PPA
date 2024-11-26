//ArrayList


import java.util.*;

class Collection4
{ss
    public static void main(String Arg[])
    {

        Hashtable<String ,Integer >hobj=new Hashtable<String,Integer>();

        hobj.put("PPA",19500);
        hobj.put("LB",20000);
        hobj.put("Python",21500);
        hobj.put("Angular",21000);

        System.out.println(hobj.get("Python"));
    }
}