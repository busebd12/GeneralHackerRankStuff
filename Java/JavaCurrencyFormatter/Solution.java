import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
import java.text.*;

public class Solution
{
    public static void main(String[] args)
    {
        Scanner scanner=new Scanner(System.in);
        
        double payment=scanner.nextDouble();
        
        scanner.close();

        NumberFormat usaFormatter=NumberFormat.getCurrencyInstance(Locale.US);
        
        NumberFormat indiaFormatter=NumberFormat.getCurrencyInstance(new Locale("en", "IN"));
        
        NumberFormat chinaFormatter=NumberFormat.getCurrencyInstance(Locale.CHINA);
        
        NumberFormat frenchFormatter=NumberFormat.getCurrencyInstance(Locale.FRANCE);
        
        String us=usaFormatter.format(payment);
        
        String india=indiaFormatter.format(payment);
        
        String china=chinaFormatter.format(payment);
        
        String france=frenchFormatter.format(payment);
        
        System.out.println("US: " + us);
        
        System.out.println("India: " + india);
        
        System.out.println("China: " + china);
        
        System.out.println("France: " + france);
    }
}
