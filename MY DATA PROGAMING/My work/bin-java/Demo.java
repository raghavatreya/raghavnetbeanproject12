/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Administrator
 */
import java.io.*;
import java.util.logging.Level;
import java.util.logging.Logger;
interface first
{
    void getname();
    void getroll();
    void showname();
    void showroll();
}
interface marks
{
    void get();
    void put();
}
public class Demo implements first, marks
{   
    String n,name;
    int r,m;
    DataInputStream in = new DataInputStream(System.in);
    public void getname()
    {
        try {
                System.out.print("\n\nEnter Name : ");          
                name = in.readLine();
            } 
            catch (IOException ex) 
            {
                Logger.getLogger(Demo.class.getName()).log(Level.SEVERE, null, ex);
            }
    }
    public void getroll()
    {
        try {
                System.out.print("\n\nEnter Roll No. : ");
                n = in.readLine();
                r = Integer.parseInt(n);
            } 
            catch (IOException ex) 
            {
                Logger.getLogger(Demo.class.getName()).log(Level.SEVERE, null, ex);
            }
    }
    public void showname()
    {
        System.out.print("\n\nName is : "+name);
    
    }
    public void showroll()
    {
        System.out.print("\n\nRoll No. is : "+r);
    }
    public void get()
    {
        try {
                System.out.print("\n\nEnter Marks : ");
                n = in.readLine();
                m = Integer.parseInt(n);
            } 
            catch (IOException ex) 
            {
                Logger.getLogger(Demo.class.getName()).log(Level.SEVERE, null, ex);
				//System.out.print(ex.message.toString());
            }
    }
    public void put()
    {
        System.out.print("\n\nMarks are : "+m);
    }
    public static void main(String[] args)throws IOException
    {
        first d = new Demo();
        marks m = new Demo();
        d.getroll();
        d.getname();
        m.get();
        d.showroll();
        d.showname();
        m.put();
    }
}