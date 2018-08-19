import java.util.*;
class spoj_91_twosquares
{
	public static void main(String [] args)
	{
		Scanner sc= new Scanner(System.in);
		int n=sc.nextInt();
		for(int i=0;i<n;i++)
		{
			long a=sc.nextLong();
			long x=(long)Math.sqrt(a);
			long y=0;
			while(x>0)
			{
				if(y*y>a)
				{
					System.out.println("No");
					break;
				}
				if(x*x+y*y==a)
				{
					System.out.println("Yes");
					break;
				}
				else if(x*x+y*y<a)
				{
					y++;
				}
				else x--;

			}
		}
	}
}
