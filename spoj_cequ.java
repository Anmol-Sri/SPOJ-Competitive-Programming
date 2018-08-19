import java.util.*;
import java.lang.*;
import java.io.*;

class spoj_cequ
{
	public static void main (String[] args)
	{
		Scanner sc= new Scanner(System.in);
		int t=sc.nextInt();
		for(int i=1;i<=t;i++)
		{
			int a=sc.nextInt();
			int b= sc.nextInt();
			int c= sc.nextInt();
			if(c%gcd(Math.max(a,b),Math.min(a,b))==0) System.out.println("Case "+i+": Yes");
			else System.out.println("Case "+i+": No");

		}
	}

	public static int gcd(int a, int b)
	{
		if(b==0) return a;
		return gcd(b,a%b);
	}
}
