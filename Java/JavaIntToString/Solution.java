import java.util.*;
import java.security.*;
import java.io.*

public class Solution
{
	public static void main(String[] args)
	{
		try
		{
			Scanner scanner=new Scanner(System.in);

			int n=scanner.nextInt();

			scanner.close();

			String s=Integer.toString(n);

			if(n==Integer.parseInt(s))
			{
				System.out.println("Good job");
			}
			else
			{
				System.out.println("Wrong answer.");
			}
		}
		catch(Exception e)
		{
			System.out.println(e);
		}
	}
}