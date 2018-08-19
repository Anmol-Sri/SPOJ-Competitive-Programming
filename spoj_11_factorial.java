import java.util.Scanner;
class spoj_11_factorial
{
  public static void main(String [] args)
  {
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    for(int i=0;i<n;i++)
    {
      int c=0;
      int a=sc.nextInt();
      for(int j=5;j<=a;j=j*5)
      {
        c=c+(a/j);
      }
      System.out.println(c);
    }
  }
}
