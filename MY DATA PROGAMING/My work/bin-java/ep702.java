//import java.io.*;
class Stack
{
  int top=-1;
  int a[]=new int [10];
  void push(int x)
  {
    if(top==9)
	{
	  System.out.println("");
	}
	else
	{
	 top+=1;
	 a[top]=x;
	}
  }
  int pop()
  {
    if(top==-1)
	{
	  System.out.println("EMPTY stack"); return (-1);
	}
	else
	{
	  int x=a[top];
	  top-=1;
	  return x;
	}
  }
}
public class ep702
{
  public static void main(String []args) //throws IOException
  { 
     Stack s;
	 s=new Stack();
	 int i;
     for(i=0;i<10;i++)
      {
	    s.push(100+i);
	  }	
	  int x;
     for(i=0;i<10;i++)
     {
	   x=s.pop();
	   System.out.println(x);
	 }	 
  }
}