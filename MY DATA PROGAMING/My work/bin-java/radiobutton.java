import java.awt.*;
public class radiobutton
{
 public static void main(String [] args)
 {
  Frame f=new Frame();
	f.setLayout(new FlowLayout());
	CheckboxGroup cbg=new CheckboxGroup();
	f.add(new Checkbox ("windows",false,cbg));
	f.add(new Checkbox ("unic",true,cbg));
	f.add(new Checkbox ("linux",true,cbg));//................
	f.setSize(300,300);
	f.setVisible(true);
 }
}