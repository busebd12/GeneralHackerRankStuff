import java.util.Scanner;

public class Solution
{

    public static void main(String[] args)
    {
            Scanner scanner=new Scanner(System.in);
        
            System.out.println("================================");
        
            for(int i=0;i<3;i++)
            {
                String s=scanner.next();
                
                int x=scanner.nextInt();
                
                System.out.printf("%-15s", s);
                
                int numberOfDigits=String.valueOf(x).length();
                
                if(numberOfDigits < 3)
                {
                    System.out.printf("%03d", x);
                }
                else
                {
                    System.out.printf("%2d", x);
                }
                
                System.out.println();
            }
        
            System.out.println("================================");
    }
}