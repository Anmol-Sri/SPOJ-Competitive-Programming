import java.util.*;
class spoj_7733_hpynos
{
	public static void main(String [] args)
	{
		Scanner sc= new Scanner(System.in);
		int n=sc.nextInt();
		boolean s[] = new boolean[1000];
		int temp=0;
		int count=0;

		while(true)
		{
			if(n==1)
			{
				System.out.println(count);
				break;
			}
			count++;
			temp=0;
			while(n>0)
			{
				temp=temp+(int)Math.pow((n%10),2);
				n=n/10;
			}
			if(s[temp]==true)
			{
				System.out.println("-1");
				break;
			}
			else
			{
				s[temp]=true;
				n=temp;
			}
		}




	}
}
