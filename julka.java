import java.util.*;
import java.math.BigInteger;
class julka
{
	public static void main(String [] args)
	{
		Scanner sc= new Scanner(System.in);
		for(int i=1;i<=10;i++)
		{
			BigInteger b=sc.nextBigInteger();
			BigInteger m=sc.nextBigInteger();
			BigInteger ans=b.subtract(m);
			ans=ans.divide(BigInteger.valueOf(2));
			System.out.println(b.subtract(ans));
			System.out.println(ans);
		}


	}
}
