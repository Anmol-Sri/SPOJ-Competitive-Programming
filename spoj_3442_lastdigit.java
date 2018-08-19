import java.util.Scanner;
class spoj_3442_lastdigit
{
	public static void main(String [] args)
	{
		Scanner sc= new Scanner(System.in);
		int n=sc.nextInt();
		for(int i=0;i<n;i++)
		{
			long a=sc.nextLong();
			long b=sc.nextLong();
			if(a==0&&b==0)
			{
				System.out.println("1");
				continue;
			}
			if(b==0)
			{
				System.out.println("1");
				continue;
			}
			if(a==0)
			{
				System.out.println("0");
				continue;
			}
			if(b%4==0)
			b=4;
			else
			b=b%4;

			long ans=1;
			while(b!=0)
			{
				ans=ans*a;
				b--;
			}
			ans=ans%10;
			System.out.println(ans);

		}
	}
}
