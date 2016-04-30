import java.io.*;
public class FileWrite 
{
        
    /**
     * Creates a new instance of <code>FileWrite</code>.
     */
    public FileWrite() 
    	{
    }
    
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
        try
		{
    		String filename= "MyFile.txt";
    		FileWriter fw = new FileWriter(filename,true); //the true will append the new data
    		fw.write("Prayatna\n");//appends the string to the file
    		fw.close();
		}
		catch(IOException ioe)
		{
    		System.err.println("IOException: " + ioe.getMessage());
		}        
    }
}
