import java.io.*;
import java.applet.*;
import java.awt.*;
public class applet1 extends Applet
{
  String msg;
  public void init()
	{
	  System.out.println("Inside init");
	  setBackground(Color.red);
	  setForeground(Color.black);
	  msg="inside init()--- ";
	}  
	public void stop()
	{
	  System.out.println("indside start");
	  msg+="init start()";
	}
	public void start()
	{
	  System.out.println("inside start ");
		msg+="indside start";
	  }

	  public void paint(Graphics g)
	  {
	   System.out.println("inside paint");
	   msg+="inside paint()---";
	   g.drawString(msg,10,30);
	  }
}
