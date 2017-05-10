import java.util.*;
import java.io.*;

class Solution
{
    public static void main(String[] args)
    {
        Scanner scanner=new Scanner(System.in);
        
        int t=scanner.nextInt();

        for(int testCase=0;testCase<t;++testCase)
        {
            try
            {
                long input=scanner.nextLong();
                
                System.out.println(input + " can be fitted in:");
                
                if(input <= Byte.MAX_VALUE && input >= Byte.MIN_VALUE)
                {
                    System.out.println("* byte");
                }
                if(input <= Short.MAX_VALUE && input >= Short.MIN_VALUE)
                {
                    System.out.println("* short");
                }
                if(input <= Integer.MAX_VALUE && input >= Integer.MIN_VALUE)
                {
                    System.out.println("* int");
                }
                if(input <= Long.MAX_VALUE && input >= Long.MIN_VALUE)
                {
                    System.out.println("* long");
                }
            }
            catch(Exception e)
            {
                System.out.println(scanner.next() + " can't be fitted anywhere.");
            }
        }
    }
}