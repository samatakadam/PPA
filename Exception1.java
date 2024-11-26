import java.util.*;

class Exception1
{
    public static void main(String Arg[])
    {
        Scanner sobj=new Scanner (System.in);

        System.out.println("Enter First number :");
        int  No1 = sobj.nextInt();


        System.out.println("Enter second  number :");
        int No2 = sobj.nextInt();

        float Ans = No1 / No2;


        System.out.println("Addition is  :"+ Ans);
    }
}