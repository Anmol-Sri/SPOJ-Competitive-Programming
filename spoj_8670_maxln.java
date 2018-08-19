import java.util.Scanner;
class spoj_8670_maxln
{
	public static void main(String [] args)
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		for(int i=1;i<=n;i++)
		{
			int r=sc.nextInt();
			double ans=4*((double)r*(double)r)+0.25;
			System.out.printf("Case "+i+": %.2f\n",ans);
		}
	}
}
