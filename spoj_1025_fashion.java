import java.util.*;
import java.lang.*;
import java.io.*;
class spoj_1025_fashion
{
	public static void main (String[] args)
	{
		Scanner sc= new Scanner(System.in);
		int t=sc.nextInt();
		for(int i=0;i<t;i++)
		{
			int n=sc.nextInt();
			long sum=0;
			Integer arr1[]=new Integer[n];
			Integer arr2[]=new Integer[n];
			for(int x=0;x<n;x++)
			arr1[x]=sc.nextInt();
			for(int x=0;x<n;x++)
			arr2[x]=sc.nextInt();
			Arrays.sort(arr1, Collections.reverseOrder());
			Arrays.sort(arr2, Collections.reverseOrder());
			for(int x=0;x<n;x++)
			sum=sum+arr1[x]*arr2[x];
			System.out.println(sum);

		}
	}
}
