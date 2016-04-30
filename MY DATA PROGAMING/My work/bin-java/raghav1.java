import java.awt.*;
import java.applet.*;
public class raghav1 extends Applet
{  String msg;
 public void init()
 {
   setBackground(Color.green);
  
  msg+="init block-----";
 }
 public void start()
 {
   msg+=" start block------";
 }
 public void paint(Graphics g)
 {
   setBackground(Color.red);
  g.drawString(msg,100,300);
  }
}
