// program is not complete;;;;;;;;;;;;;;;;;;;;;;;
interface extstackinterface extends stackinterface
{
  public boolean isstackempty();
  public boolean isstackfull();
  public void display();
}
class extstack implements extstackinterface
{
  int top=-1;
  int a[]=new int [10];
  public void push(int x)
  {
    if(top==9)
	{
	 System.out.println("Stack full");
	 return 0;
	}
	top+=1;
	a[top]=x;
  }
  public int pop()
  {
    if(top==-1)
	{
	  System.out.println("Stack empty");
	  return -1;
	}
	int x=a[top];
	top-=1;
	return x;
  }
  public void display()
  {
    for(int i=top;i>0;i--)
	{
	  System.out.println(a[i]);
	}
  }
  public boolean isstackempty()
  {
   if(top==-1)
   {
     return(true);
   }
   else
   {
    return (false);
   }
  }
  public boolean isstackfull()
  {
   if(top==9)
   {
     return true;
   }
   else
   {
     return false;
   }
  }
}