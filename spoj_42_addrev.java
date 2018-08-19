import java.util.Scanner;
class spoj_42_addrev
{
	public static void main(String []args)
	{
		Scanner sc= new Scanner(System.in);
		int n=sc.nextInt();
		for(int i=0;i<n;i++)
		{
			int a=sc.nextInt();
			int b=sc.nextInt();
			a=spoj.rev(a);
			b=spoj.rev(b);
			int c=a+b;
			System.out.println(spoj.rev(c));
		}
	}
	public static int rev(int a)
	{
		int s=0,d=0;
		while(a!=0)
		{
			d=a%10;
			s=(s*10)+d;
			a=a/10;
		}
		return s;
	}
}
