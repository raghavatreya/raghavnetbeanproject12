import java.awt.*;
public class  canvasdemo
{
 public static void main(String [] args)
 {
  Frame f=new Frame();
  f.setLayout(new FlowLayout());
  Canvas c=new MyCanvas();
  c.setSize(100,100);
  f.add(c);
  f.setSize(100,200);
 	f.setVisible(true);
 }
 }
 class  MyCanvas extends Canvas
 {
  public void paint(Graphics g)
  {
   setBackground(Color.green);
   g.setColor(Color.red);
   g.drawLine(0,0,99,99);
  }
 }