import java.io.*;
import java.util.*;

public class Solution
{
    public static void main(String[] args)
    {
        Scanner scanner=new Scanner(System.in);
        
        String A=scanner.next();
        
        String B=scanner.next();
        
        int sum=A.length() + B.length();
        
        System.out.println(sum);
        
        System.out.println(A.compareTo(B) > 0 ? "Yes" : "No");
        
        String AWithFirstLetterCapitalized=A.substring(0, 1).toUpperCase() + A.substring(1);
        
        String BWithFirstLetterCapitalized=B.substring(0, 1).toUpperCase() + B.substring(1);
        
        System.out.println(AWithFirstLetterCapitalized + " " + BWithFirstLetterCapitalized);
    }
}