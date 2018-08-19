import java.util.Scanner;
class spoj_1030_eights
{
	public static void main(String [] args)
	{
		Scanner sc= new Scanner(System.in);
		int n=sc.nextInt();
		for(int i=0;i<n;i++)
		{
			long a=sc.nextLong();
			long c=(a-1)*250+192;
			System.out.println(c);
		}
	}
}
