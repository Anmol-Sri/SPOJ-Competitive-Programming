import java.util.*;
import java.lang.*;
import java.io.*;

class spoj_7424_girlsandboys
{
	public static void main (String[] args)
	{
		Scanner sc= new Scanner (System.in);
		int g,b,n=-1;

		while(true)
	    {
		    g=sc.nextInt();
			b=sc.nextInt();
	        if(g==-1&&b==-1) break;
    	    else if(g==0&&b==0) n=0;
		    else if(g==b) n=1;
    		else if(g>b)  n=((g+b)/(b+1));
		    else  if(b>g) n=((g+b)/(g+1));
		    System.out.println(n);
		}
	}
}
