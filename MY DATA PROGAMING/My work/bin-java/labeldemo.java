import java.awt.*;
public class labeldemo
{
 public static void main(String [] args)
    {
	     Frame f=new Frame();
		 f.setLayout(new BorderLayout(3,3));
		 Label l1=new Label("alignment",Label.LEFT);f.add(l1);
		 //Label l2=new Label("alignment",Label.LEFT);f.add(l2);
		 //Label l3=new Label("alignment",Label.LEFT);f.add(l3);
		 Label l4=new Label("alignment",Label.CENTER);f.add(l4);
		// Label l5=new Label("alignment",Label.CENTER);f.add(l5);
		// Label l6=new Label("alignment",Label.CENTER);f.add(l6);
		 Label l7=new Label("alignment",Label.RIGHT);f.add(l7);
		 //Label l8=new Label("alignment",Label.RIGHT);f.add(l8);
		 //Label l9=new Label("alignment",Label.RIGHT);f.add(l9);
		 //Label l1=new Label("alignment",Label.LEFT);
		f.setSize(300,300);
		f.setVisible(true);
     } 
}