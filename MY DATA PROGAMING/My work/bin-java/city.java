import java.io.*;
class raghav
{  
	String s;
    int i,j;
   float a,b,t;
                 public  void getdetail() throws IOException
				 {
						DataInputStream in = new DataInputStream(System.in);
						System.out.println("Enter population of  city");
						s=in.readLine();
						a=Integer.parseInt(s);
						System.out.println("Enter literacy level of city");
						s=in.readLine();
						b=Integer.parseInt(s);
						System.out.println("Enter city name ");
						s=in.readLine();
				     
				 }   
				
}
 
public class 3city
{   
	int i,j;
				public static void main(String [] args) throws IOException
				{
						raghav[] h = new raghav[5];//  we new raghav() we are calling default constructor;
						int i;
						for(i=0;i<4;i++)
						{ 
									h[i]=new raghav();
									System.out.println("Enter details of city number "+i);
									h[i].getdetail();
						}
						 raghav temp=new raghva();
						      temp.sortpopulation();
				   
				      System.out.println("sorting bf population ");
									for(i=0;i<5;i++)
										{
												for(j=0;j<5;j++)
														{
															if(h[i].b>h[j].b)
																{
																		temp.b=h[i].b;
																		h[i].b=h[j].b;
																		h[j].b=h[i].b;
				  
																		temp.a=h[i].a;
																		h[i].a=h[j].a;
																		h[j].a=h[i].a;
                  
																		temp.s=h[i].s;
																		h[i].s=h[j].s;
																		h[j].s=h[i].s;

																}		   
														}
											}
                      for(i=0;i<5;i++)
					  {
					     System.out.println("population"+h[i].b);
					     System.out.println("name   of  city"+h[i].s);
					     System.out.println("LITERCEY   LEVEL "+h[i].a);
					  }

				 }                                                                                                                                                                                                                                                                                                                                                                                                                         
// *** i am unable to take string argument  in a char array
}