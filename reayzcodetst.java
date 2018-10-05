import java.util.*;
class reayzcodetst
{
	public static void main(String [] args)
	{
		Scanner sc= new Scanner(System.in);
		int t=sc.nextInt();
		for(int q=1;q<=t;q++)
		{
			int n=sc.nextInt();
			int x=sc.nextInt();
			int arr[]=new int[n];
			long count=0;
			for(int i=0;i<n;i++) arr[i]=sc.nextInt();
			if(x!=0)	
			for(int i=0;i<n;i++)
			{
				for(int j=i;j<n;j++)
				{
					if(arr[i]-arr[j]<0){
						if(arr[i]-arr[j]==((-1)*x) && i!=j)
							count++;
					}
					else{
						if(arr[i]-arr[j]==x && i!=j)
							count++;
					}	
				}
			}
			else{
				for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					if(arr[i]-arr[j]==0 && i!=j){
						
							count++;
					}						
				}
			}

			}

			System.out.println("Case "+q+": "+count);
		}
	}
}