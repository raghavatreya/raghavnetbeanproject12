class stack
{
  private int top=-1;
  private int a[]=new int [10];
  void push(int x)
  {
   if(top==9)
   {
     System.out.println("Stack full");
	 return ;
   }
   top+=1;
   a[top]=x;
  } 
  int pop()
  {
    if(top==-1)
	{
	  System.out.println("Stack empty");
	  return -1;
	}
	int x =a[top];
	top-=1;
	return x;
  }
}
class stackdemo
{
  public static void main(String [] args)
  {
    stack s1=new stack();
	stack s2=new stack();
	int i,x;
	for(i=0;i<10;i++)
	{
	  s1.push(i);
	}
	for(i=10;i<20;i++)
	{
	  s2.push(i);
	}
	for(i=0;i<10;i++)
	{
	  x=s1.pop();
	  System.out.println(x+"   ");
	}
	System.out.println("\n\n");
	for(i=10;i<20;i++)
	{
	  x=s2.pop();
	  System.out.println(x+"   ");
	}
  }
}