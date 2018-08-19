import java.util.Scanner;
class spoj_902_hangover
{
	public static void main(String [] args)
	{
		Scanner sc= new Scanner(System.in);
		float n=sc.nextFloat();
		while(n!=0.00&&n<=5.20)
		{
			float s=0.0f;
			int i;
			for( i=2;s<n;i++)
			{

				s=(s+(1.0f/i));

			}
			System.out.println((i-2)+" card(s)");

			n=sc.nextFloat();
		}

	}
}
