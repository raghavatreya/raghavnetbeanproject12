import java.awt.*;
public class layout extends Frame
{
  public static void main(String [] args)
  {
	/*	Frame f=new Frame();
		f.setLayout(new GridLayout(5,3));
		int row;
		for(row=0;row<5;row++)
		{
			f.add(new Label("Label:"+row));
			f.add(new Button("Button:"+row));
			f.add(new Label("Textfield :"+row));
		}
		f.setSize(300,300);
		f.setVisible(true);
		*/
		Frame f=new Frame();
		f.setLayout(new BorderLayout());
		Panel toolbar=new Panel();
		toolbar.setLayout(new FlowLayout(FlowLayout.LEFT));
		toolbar.setBackground(Color.gray);
		toolbar.add(new Button("THIS"));
		toolbar.add(new Button("IS"));
		toolbar.add(new Button("THe"));
		toolbar.add(new Button("toolbar"));
		f.add(toolbar,BorderLayout.NORTH);
		TextField status=new TextField("status");
		status.setFont(new Font("mousepaced",Font.BOLD,48));
		f.add(status,BorderLayout.SOUTH);
		f.setSize(300,300);
		f.setVisible(true);
}
}