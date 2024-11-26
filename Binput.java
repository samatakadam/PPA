import java.io.*;

class Binput
{
    public static void main (String Arg[])
    {
        //InputStreamedReader iobj= new InputStreamedReader(System.in);
       // BufferedReader bobj =new BufferedReader(iobj);

        BufferedReader bobj =new BufferedReader(new InputStreamedReader(System.in));
        System.out.println("Enter your name :");
        String name =bobj.readline(); //method


        System.out.println("Welcome :"+name);
    }


}