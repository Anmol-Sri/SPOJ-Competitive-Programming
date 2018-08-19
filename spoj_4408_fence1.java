import java.util.Scanner;
class spoj_4408_fence1
{
	public static void main(String [] args)
	{
		Scanner sc= new Scanner(System.in);
		int n=sc.nextInt();
		while(n!=0)
		{
			double ans=n*n/2.0/Math.acos(-1.0);
			System.out.printf("%.2f\n",ans);
			n=sc.nextInt();
		}
	}
}
