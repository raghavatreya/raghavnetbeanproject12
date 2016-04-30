import. java.*;
{
 public class matrixmul
 {
 public static void main() IOException
  {
     DataInputStream in = new DataInputStream(System.in);
	 int i,j,k,n;
	  int a[][]=new [3][3],b[3][3]=new ,c[3][3];
	  String n;
	  Systeam.out.println(" Enter element of matrix :  ");
      
	  for(i=0;i<3;i++)
		{
			s[i] = new a();
		}
	  for(i=0;i<3;i++)
      {
	     for(j=0;j<3;j++)
          {
		    Systeam.out.println("enter Element of a["+i);
			Systeam.out.print("][",+j);
			Systeam.out.print("]   =");
			 n=in.readLine();
		     a[i][j]=Integer.parseInt(n);
          }		 
	  }	 
	  for(i=0;i<3;i++)
      {
	     for(j=0;j<3;j++)
          {
		    Systeam.out.print("enter Element of b["+i);
			Systeam.out.print("][",+j);
			Systeam.out.print("]   =");
			 n=in.readLine();
		     b[i][j]=Integer.parseInt(n);
			}		 
	   }		
	   for(i=0;i<3;i++)
       {
	     for(j=0;j<3;j++)
          {
           c[i][j]=a[i][1]*b[1][j]+a[i][2]*b[2][j]+a[i][3]*b[3][j];
            Systeam.out.println(" Element of c["+i);
			Systeam.out.print("][",+j);
			Systeam.out.print("]   ="+c[i][j]);		  
		  }
 	    } 
}
}
}