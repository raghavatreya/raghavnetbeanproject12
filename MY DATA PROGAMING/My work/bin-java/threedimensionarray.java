import java.io.*;
public class threedimensionarray
{
 public static void main(String [] args)
 {
  int a[3][4][2]=new int {
					{4,2
					2,3
					3,1
					1,0},
					{4,2
					2,3
					3,1
					1,0},
					{4,2
					2,3
					3,1
					1,0}
				 }
	int i,j,k;
	for(i=0;i<3;i++)
	{
	 for(j=0;j<4;j++)
	 {
	  for(k=0;k<2;k++)
	  {
	   System.out.print(a[i][j][k]);
	  }
	  System.out.println();
	 }
	}
 }
} 