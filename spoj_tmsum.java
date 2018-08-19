import java.util.*;
class spoj_tmsum
{
	public static void main(String [] args)
	{
		Scanner sc= new Scanner(System.in);
		int t=sc.nextInt();
		for(int x=0;x<t;x++)
		{
			int n=sc.nextInt();
			int arr[]=new int[n];
			for(int i=0;i<n;i++)
				arr[i]=sc.nextInt();

				if(n == 1)
				{
    			    System.out.println(arr[0]);
    	    	    continue;
        		}
    		    if(n == 2)
    		    {
    		       System.out.println(Math.max(arr[0] * arr[1], arr[0] + arr[1]));
    		       continue;
        		}
        		Arrays.sort(arr);
        		int sum[]=new int[n];
        		sum[0] = arr[0];
		        sum[1] = Math.max(arr[0] * arr[1], arr[0] + arr[1]);
		        for(int i=2;i<n;i++)
	            sum[i] = Math.max(sum[i-1] + arr[i], sum[i-2] + (arr[i-1] * arr[i]));
	            System.out.println(sum[n-1]);

		}
	}
}
