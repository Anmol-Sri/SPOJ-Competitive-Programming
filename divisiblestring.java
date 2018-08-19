import java.util.*;
import java.lang.*;
import java.io.*;
class divisiblestrings {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int a = s.nextInt();
        String s1,s2,s3;
        s3=s.nextLine();
        for(int ii=0;ii<a;ii++)
        {
            s1=s.nextLine();
            s2=s.nextLine();
            if(s1.length()<s2.length())
            {
                System.out.println(s1.length());
                continue;
            }
            if(s2.length()==0)
            {
                System.out.println(s1.length());
                continue;
            }
            int remove=0;
            int r=0,j,fl=0;
            for(int i=0;i<s1.length();)
            {
               r=0;
              int l=0;
                for(j=r;j<s2.length()&&i<s1.length();i++)  {
                    if(s2.charAt(j)!=s1.charAt(i))   {
                        remove++;
      if(i==s1.length()-1&&j<=s2.length()-1)   {
                       remove+=l;
                   }
                    continue;
                    }
                      else{
                       l++;
                      }
                   if(i==s1.length()-1&&j!=s2.length()-1)  {
                       remove+=l;
                   }
                   j++;
                }
            }
            System.out.println(remove);
        }
    }
}
