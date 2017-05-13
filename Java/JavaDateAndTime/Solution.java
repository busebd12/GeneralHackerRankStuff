import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
import java.time.LocalDate;

public class Solution
{
    public static void main(String[] args)
    {
        Scanner scanner=new Scanner(System.in);
        
        String month=scanner.next();
        
        String day=scanner.next();
        
        String year=scanner.next();
        
        LocalDate d=LocalDate.of(year, month, day);
        
        System.out.print(d.getDayOfWeek());
    }
}
