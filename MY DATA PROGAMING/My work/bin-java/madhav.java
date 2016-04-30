import java.io.*;
class raghav
{  
    String s;
    int i,j;
    float pop,lit,t;
                 public  void getdetail() throws IOException
				 {
						DataInputStream in = new DataInputStream(System.in);
						System.out.println("Enter population of  city");
						s=in.readLine();
						pop=Integer.parseInt(s);
						System.out.println("Enter literacy level of city");
						s=in.readLine();
						lit=Integer.parseInt(s);
						System.out.println("Enter city name ");
						s=in.readLine();
				     
				 }
                public void inname(String p)
                   {   s=p;  }		
                public void inpopulation(float d )
                 {   pop=d; }	
                public void inliteracy(float x)
                  {  lit=x;  }				  
                public float getpopulation()
                 {    return pop;   }	
                public float getliteracy()
                    {   return lit;  }				 
				public String getname()
					{
					  return s;
					}
				
} 
public class madhav
{   
          public static void main(String [] args) throws IOException
				{
						raghav[] h = new raghav[5];//  we new raghav() we are calling default constructor;
						int i,j;
						float a,b;
						String f;
						for(i=0;i<2;i++)
						{ 
									h[i]=new raghav();
									System.out.println("Enter details of city number "+i);
					 				h[i].getdetail();
						 
						     if(i==1)
							 {           System.out.println("\n\n**************sorting through literacy level ****************\n\n");
											for(i=0;i<1;i++)
								                     		{
		                      										for(j=i+1;j<2;j++)
																		{
																			if((h[i].getliteracy())>(h[j].getliteracy()))
																					{
																										b=h[i].getliteracy();
																										h[i].inliteracy(h[j].getliteracy());
																										h[j].inliteracy(b);
				  
																										a=h[i].getpopulation();
																										h[i].inpopulation(h[j].getpopulation());
																										h[j].inpopulation(a);
                  
																										f=h[i].getname();
																										h[i].inname(h[j].getname());
																										h[j].inname(f);

																					}		   
																		}
																}
							                                for(i=0;i<2;i++)
												{
														System.out.println("population        :"+h[i].getpopulation());
														System.out.println("name   of  city   :"+h[i].getname());
														System.out.println("LITERCEY   LEVEL  :"+h[i].getliteracy());
												}
												System.out.println("\n\n********************sorting through population*******************\n\n");
												for(i=0;i<1;i++)
								                     		{
		                      										for(j=i+1;j<2;j++)
																		{
																			if((h[i].getpopulation())>(h[j].getpopulation()))
																					{
																										b=h[i].getliteracy();
																										h[i].inliteracy(h[j].getliteracy());
																										h[j].inliteracy(b);
				  
																										a=h[i].getpopulation();
																										h[i].inpopulation(h[j].getpopulation());
																										h[j].inpopulation(a);
                  
																										f=h[i].getname();
																										h[i].inname(h[j].getname());
																										h[j].inname(f);

																					}		   
																		}
																}
							                                for(i=0;i<2;i++)
												{
														System.out.println("population        :"+h[i].getpopulation());
														System.out.println("name   of  city   :"+h[i].getname());
														System.out.println("LITERCEY   LEVEL  :"+h[i].getliteracy());
												}
										System.out.println("\n\n****************sorting by name*******************\n\n");
												for(i=0;i<1;i++)
								                     		{
		                      										for(j=i+1;j<2;j++)
																		{
																			if(h[i].getname().compareTo(h[j].getname())>0)
																					{
																										b=h[i].getliteracy();
																										h[i].inliteracy(h[j].getliteracy());
																										h[j].inliteracy(b);
				  
																										a=h[i].getpopulation();
																										h[i].inpopulation(h[j].getpopulation());
																										h[j].inpopulation(a);
                  
																										f=h[i].getname();
																										h[i].inname(h[j].getname());
																										h[j].inname(f);

																					}		   
																		}
																}
							                                for(i=0;i<2;i++)
												{
														System.out.println("population        :"+h[i].getpopulation());
														System.out.println("name   of  city   :"+h[i].getname());
														System.out.println("LITERCEY   LEVEL  :"+h[i].getliteracy());
												}
							 }   
						}
				 } 
}
									