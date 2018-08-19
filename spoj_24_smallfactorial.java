import java.util.Scanner;
class spoj_24_smallfactorial
{
  public static void main(String [] args)
  {
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    for(int i=0;i<n;i++)
    {
      long c=1;

      short a=sc.nextShort();
      if(a!=0)
       for(short j=1;j<=a;j++)
      {
        c=c*j;

      }
      System.out.println(c);

    }
  }
}
