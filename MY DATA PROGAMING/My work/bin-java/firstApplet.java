import java.applet.*;
import java.awt.*;
public class firstApplet extends Applet
{
	public void paint(Graphics g)
	{
		setBackground(Color.magenta);
		setForeground(Color.yellow);
		g.drawString("Welcome to Unique Computers",100,100);
	}
}