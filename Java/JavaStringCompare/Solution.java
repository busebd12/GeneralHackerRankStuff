import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
import java.util.ArrayList;  
import java.util.Collections;  
import java.util.List;  
import java.util.Scanner;

public class Solution
{
    public static void main(String[] args)
    {
        Scanner scanner=new Scanner(System.in);
        
        String input=scanner.next();
        
        int k=scanner.nextInt();
        
        List<String> list=new ArrayList<String>();
        
        for(int i=0;i<input.length();++i)
        {  
            if(input.length()-i >= k)
            {
                list.add(input.substring(i, k + i));  
            }  
        }
        
        Collections.sort(list);
        
        System.out.println(list.get(0));
        
        System.out.println(list.get(list.size() - 1));
    }
}