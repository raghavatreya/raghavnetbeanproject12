import java.io.*;
 public class mat
 {
        public static void main(String [] args) throws IOException
       {
			DataInputStream in = new DataInputStream(System.in);
			int i,j,k;
			int a[][]=new int [3][3];
			int b[][]=new int [3][3];
			int c[][]=new int [3][3];
			String n;
										System.out.println(" Enter element of matrix :  ");
										for(i=0;i<3;i++)
										{  
											for(j=0;j<3;j++)
											{c[i][j] = 0;
											b[i][j]=0;
											a[i][j]=0;
											}
										}
										
										for(i=0;i<3;i++)
										{
											for(j=0;j<3;j++)
											{
											System.out.println("enter Element of a["+i+"]["+j+"]   =");
											n=in.readLine();
											a[i][j]=Integer.parseInt(n);
											}		 
										}	 
										for(i=0;i<3;i++)
										{
											for(j=0;j<3;j++)
											{
											System.out.println("enter Element of b["+i+"]["+j+"]   =");
											n=in.readLine();
											b[i][j]=Integer.parseInt(n);
											}		 
										}		
										for(i=0;i<3;i++)
										{
											for(j=0;j<3;j++)
											{
											  c[i][j]=a[i][1]*b[1][j]+a[i][2]*b[2][j]+a[i][0]*b[0][j];	  
											  System.out.println("enter Element of c["+i+"]["+j+"]   ="+c[i][j]);
											}
										} 
									   /*for(i=0;i<3;i++)							   /*for(i=0;i<3;i++)
										{
											for(j=0;j<3;j++)
											{
											
											}		 
										}*/		
			
		}
}

