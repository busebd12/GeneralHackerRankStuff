import java.io.*;
import java.util.*;
public class Solution
{
    public static void main(String[] args)
    {
        Scanner scanner=new Scanner(System.in);
        
        String input=scanner.nextLine().trim();
        
        scanner.close();
        
        String[] tokens=input.split("[^\\p{Alpha}]+");
        
        int size=(input.isEmpty()) ? 0 : tokens.length;
        
        System.out.println(size);
        
        for(String s : tokens)
        {
            System.out.println(s);
        }
    }
}