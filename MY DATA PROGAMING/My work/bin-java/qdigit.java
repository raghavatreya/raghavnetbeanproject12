import java.io.*;
public  class qdigit
{
 public static void main(String[]args)
 {
   StringBuffer sb=new StringBuffer("atreya");
   int a=1000;
   String s;
   s=sb.append("a==").append(a).toString();
   System.out.println(s);
   sb.reverse();
   System.out.println(sb);
 }
}