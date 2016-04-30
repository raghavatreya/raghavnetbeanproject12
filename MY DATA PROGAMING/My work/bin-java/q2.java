import java.io.*;
class stack
{
  int top=-1;
  int size;
  object a[];
  stack(int size)
  {
    this.size=size;
	a=new object[size];
  }
  
  void push(object x)
  {
    if(top==1)
	{
	  return null;
	}
	object x=a[top];
	top-=1;
	return x;
  }
}
class q2
{
  public static void main(String [] args)
  {
    stack s1=new stack(10);
	stack s2=new stack(10);
	stack s3=new stack(10);
     s3.push(new Integer(10));
	 s3.push(new float (13.5));
	 
	 
  }
}