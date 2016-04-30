import java.io.*;
public class new9
{
    public static void main(String [] args)
	{
	  int a,b,c;
	  byte ascii[]={65,66,67,68,69,70};
	  String s =new String(ascii);
	  System.out.println(ascii);
	  String s1=new String(ascii,2,3);
	 System.out.println(s1);
	}
}