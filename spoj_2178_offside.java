import java.util.*;
class spoj_2178_offside
{
	public static void main(String [] args)
	{
		Scanner sc= new Scanner(System.in);
		int a=sc.nextInt();
		int d=sc.nextInt();

		while(a!=0 && d!=0)
		{
			int a1=10000,d1=10000,d2=10000,temp=0;

			for(int i=0;i<a;i++)
			{
				temp=sc.nextInt();

				if(a1 >=temp)
					a1=temp;
			}

			for(int i=0;i<d;i++)
			{
				temp=sc.nextInt();
				if(d2>=temp)
				{
					if(d1>=temp)
					{
						d2=d1;
						d1=temp;
					}
					else
					{
						d2=temp;
					}
					
				}
			}

			if(d2 <=a1) System.out.println("N");
			else System.out.println("Y");

			a=sc.nextInt();
			d=sc.nextInt();
		}
	}
}