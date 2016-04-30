import java.io.*;
public class Readdfiles 
{
  	public static void main(String args[]) throws Exception
  	{
    	String []filename={"C:\\my.txt","C:\\my1.txt"};
    	File file=new File("C:\\my2.txt");
    	FileWriter output=new FileWriter(file);
    	try
    	{   
      		for(int i=0;i<filename.length;i++)
      		{
        		BufferedReader objBufferedReader = new BufferedReader(new FileReader(getDictionaryFilePath(filename[i])));
		        String line;
        		while ((line = objBufferedReader.readLine())!=null )
        		{
          			//line=line.replace(" ","");
			        output.write(line);
        		}
        		objBufferedReader.close();
      		}
      		output.close();
   	 	}
    	catch (Exception e) 
    	{
      		throw new Exception (e);
    	}
  }
  public static String getDictionaryFilePath(String filename) throws Exception
  {
    String dictionaryFolderPath = null;
    File configFolder = new File(filename);
    try 
    {
      dictionaryFolderPath = configFolder.getAbsolutePath();
    } 
    catch (Exception e) 
    {
      throw new Exception (e);
    }
    return dictionaryFolderPath;
  }
}