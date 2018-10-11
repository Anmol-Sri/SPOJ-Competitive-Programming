import java.util.*;
import java.math.BigInteger;
class geoprob
{
	public static void main(String [] args)
	{
		Scanner sc= new Scanner(System.in);
		int t=sc.nextInt();
		for(int i=1;i<=t;i++)
		{
			BigInteger a,b,c,d;
			b=sc.nextBigInteger();
			c=sc.nextBigInteger();
			d=sc.nextBigInteger();
			b=c.subtract(b);
			d=c.subtract(d);
			a=b.add(d);
			System.out.println(a);
		}
	}
}