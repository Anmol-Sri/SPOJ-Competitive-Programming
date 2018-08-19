import java.util.Scanner;
class spoj_4300_rectangles
{
	public static void main(String [] args)
	{
		Scanner sc= new Scanner(System.in);
		long n=sc.nextLong();
		long c=0;
		for(long i=1;i<=n;i++)
		{
			for(long j=i;j<=n;j++)
			{
				if(i*j>n) break;

				c++;
			}
		}
		System.out.println(c);
	}
}
