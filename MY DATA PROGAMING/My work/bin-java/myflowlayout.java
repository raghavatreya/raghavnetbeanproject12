import java.io.*;
import java.awt.*;
public class myflowlayout
{
  public static void main(String [] args)throws IOException
	{
          Frame f=new Frame();
		  FlowLayout flow=new FlowLayout();
		  f.setLayout(flow);
		  Label label=new Label("name :");
		  f.add(label);
		  TextField tf=new TextField("dhan pat ray");
		  f.add(tf);
		  tf.setBackground(Color.cyan);
		  tf.setForeground(Color.green);
		  Button button =new Button("ok");
		Font font=new Font("serif",Font.BOLD,24);
			button.setFont(font);
			f.add(button);
			f.setSize(300,300);
			f.setVisible(true);
	} 
}