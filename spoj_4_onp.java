import java.util.*;
class spoj_4_onp
{
	public static void main(String [] args)
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		for(int i=0;i<=n;i++)
		{
			String s=sc.nextLine();
			Stack<Character> mystack = new Stack<Character>();

			for(int j=0;j<s.length();j++)
			{
				if(s.charAt(j)>='a'&&s.charAt(j)<='z')
				{
					System.out.print(s.charAt(j));
					continue;
				}
				else if(s.charAt(j)==')')
				{
					char t=mystack.peek();
					System.out.print(t);
					mystack.pop();
					continue;
				}
				else if (s.charAt(j)=='(')continue;
				else mystack.push(s.charAt(j));
			}

			System.out.println();
		}
	}
}
