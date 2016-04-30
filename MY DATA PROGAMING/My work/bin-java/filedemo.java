import java.io.*;
//class filedemo

 
 /*public static void main(String [] args)
 {
   File f1=new File("/java/copyright");
   p("file name"+f1.getName());
   p("path :"+f1.getPath());
   p("abs path"+f1.getAbsolutePath());
   p("parents"+f1.getParent());
   p( f1.exists() ? "exists" : "does not exists" );
   //P("");
   p("------------------------------------------------");
   */
   class DirList
   {
    static void p(String s)
    {
      System.out.println(s);
     }   
    public static void main(String [] args)
	{
	  String dirname="/java";
	  File f1=new File(dirname);
	  if(f1.isDirectory())
	  {
	   p("Directory of "+dirname);
	   String s[]=f1.list();
	   
	   for(int i=0;i<s.length;i++)
	  }
	  else
	  {
	   p("not a directory");
	  }
	}
   }
 
