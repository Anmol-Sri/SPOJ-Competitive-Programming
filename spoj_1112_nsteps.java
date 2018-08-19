import java.util.Scanner;
class spoj_1112_nsteps
{
	public static void main(String [] args)
	{
		Scanner sc= new Scanner(System.in);
		int n=sc.nextInt();
		for(int i=0;i<n;i++)
		{
			int a=sc.nextInt();
			int b=sc.nextInt();
			if(a==b)
			if(a%2==0&&b%2==0)
			System.out.println(a+b);
			else
			System.out.println((a+b)-1);
			else if (a-b==2)
			if(a%2==0&&b%2==0)
			System.out.println(a+b);
			else
			System.out.println((a+b)-1);
			else
			System.out.println("No Number");
		}

	}
}
