import java.awt.*;
public class spandemo
{
 public static void main(String [] args)
 {
	Frame f=new Frame();
    f.setLayout(new FlowLayout());
	f.setSize(350,350);
	ScrollPane spane=new ScrollPane();
	spane.setBackground(Color.BLACK);f.add(spane);
	Button b=new Button("raghav atreya");
	b.setFont(new Font("serif",Font.ITALIC,100));spane.add(b);
	f.setVisible(true);
  }
}