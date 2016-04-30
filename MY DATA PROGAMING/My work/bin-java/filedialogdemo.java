import java.awt.*;
public class filedialogdemo
{
 public static void main(String [] args)
 {
  Frame f=new Frame();
  f.setLayout(new FlowLayout());
  
   f.setSize(300,300);
	f.setVisible(true);
	FileDialog fd=new FileDialog(f,"dhoose.file",FileDialog.LOAD);
		fd.setVisible(true);
		System.out.println(fd.getFile());
		System.out.println(fd.getDirectory());
 }
}