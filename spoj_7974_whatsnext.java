import java.util.Scanner;
class spoj_7974_whatsnext
{
	public static void main(String [] args)
	{
		Scanner sc=new Scanner(System.in);
		while(true)
		{
			int a1,a2,a3;
			a1=sc.nextInt();
			a2=sc.nextInt();
			a3=sc.nextInt();

			if(a1==0&&a2==0&&a3==0) break;

			int t1=a2-a1;
			int t2=a3-a2;
			if(t1==t2)
			System.out.println("AP "+(a3+t2));
			else
			System.out.println("GP "+(a3*(a2/a1)));
		}
	}
}
