import java.io.*;
import java.util.*;

public class Solution
{
    public static void main(String[] args)
    {
        Scanner scanner=new Scanner(System.in);
        
        String A=scanner.next();
        
        String reverse=new StringBuilder(A).reverse().toString();
        
        System.out.println(A.equals(reverse) ? "Yes" : "No");
    }
}