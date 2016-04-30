import java.io.*;
 public class fodiper
{
      static public void main(String[] args) throws IOException
     {
        DataInputStream in =new DataInputStream(System.in);
		int g,h,i,j,k,l,sum;
		for(i=1;i<10000;i++)
 			{
               sum=0;
               g=0;
			   h=0;
	           j=i;
					k=j%100;
					j=j/100;
								for(l=1;l<j;l++)
								{
										if(j%l==0)
											{
												sum=sum+l;
											}
								}
								   if(sum==j)
								  {  //System.out.println("myself rahav");
									  g=1;	
				                  }
		   
					sum=0;
								for(l=1;l<k;l++)
								{
									if(k%l==0)
										{
											sum=sum+l;
										}
								}
									if(sum==k)
									{ //System.out.println("Your name is raghav");
									   h=1;
									}								
								if(h==1  && g==1)
									{
									 System.out.println(i);		
									}
		
		}
		
     } 
}
