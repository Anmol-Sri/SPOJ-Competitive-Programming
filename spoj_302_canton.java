import java.util.*;
import java.lang.*;
import java.io.*;

class spoj_302_canton
{
	public static void main (String[] args)
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		for(int x=0;x<n;x++)
		{
			 int i,num,sum=0;
	     num=sc.nextInt();
	     for(i=1;;i++)
	     {
    	        sum+=i;
    	     if(sum>=num)
    	         break;
       	}
    		  int temp=num-(sum-i);
    		 int total=i+1;
    		 if(i%2==0)
    	     System.out.println("TERM "+num+" IS "+temp+"/"+(total-temp));
    		 else
	           System.out.println("TERM "+num+" IS "+(total-temp)+"/"+temp);
		}
	}
}
