import java.util.Scanner;
class spoj_3410_SAMER08F
{
	public static void main(String [] args)
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		while(n!=0)
		{
			long a=0;
			for(int i=1;i<=n;i++)
			a=a+(i*i);
			System.out.println(a);
			n=sc.nextInt();
		}
	}
}
