import java.io.*;

class Binput
{
    public static void main (String Arg[])
    {
        try
        { 
        

        BufferedReader bobj =new BufferedReader(new InputStreamedReader(System.in));
        System.out.println("Enter First number :");
        String name =bobj.readline();
        int No1=Integer.paresInt(bobj.readline());


        System.out.println("Enter second number");
        int No2=Integer.paresInt(bobj.readline());
        int Ans =No1+No2;
        System.out.println(Ans);
        }
    catch(IOException obj)
    {}

    }
}