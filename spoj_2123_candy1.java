import java.util.*;
import java.lang.*;
import java.io.*;


class spoj_2123_candy1
{
	public static void main (String[] args)
	{
		Scanner sc= new Scanner (System.in);
		while(true)
		{
			int t=sc.nextInt();
			int count=0;
			if(t==-1) break;
			int a[]=new int[t];
			int sum=0;
			for(int i=0;i<t;i++)
			{
				a[i]=sc.nextInt();
				sum=sum+a[i];
			}

			if(sum%t!=0) System.out.println("-1");
			else
			{
				int avg=sum/t;
				for(int i=0;i<t;i++)
				{
					if(a[i]>avg)
					{
						count=count+(a[i]-avg);
					}
				}
				System.out.println(count);
			}
			continue;
		}

	}
}
