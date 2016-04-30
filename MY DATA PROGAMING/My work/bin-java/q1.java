import java.io.*;
public class q1
{
  public static void main(String [] args) throws IOException
  {
     String s,a,b;
   int z=0,n=-2,i,j=0,k=-1,l=0,q=0,x=0,y=0,v=0;
	System.out.println("\n\tEnter the number\n");
	DataInputStream in =new DataInputStream(System.in);
	s=in.readLine();
	
 String p[]=s.split(" "); 
 j=p.length;
 for(i=0;i<j;i++)
 {
   a=p[i];
   if(a.compareTo("hundred")==0)
   {k=i;System.out.println("k="+k);}
   if( a.compareTo("thousand")==0)
   {n=i;System.out.println("n="+n);}
 } 
	for(i=0;i<j;i++)
	{a=p[i]; 
			if(i==n || i==k)
				{continue;}
			else if(i<n)
			{z=z+wordtonum(a);System.out.println("z="+z);y=1; }
			else if(i<k)
            {l+=wordtonum(a);System.out.println("l="+l);x=1; }
			else
			{ q+=wordtonum(a);System.out.println("q="+q);}
			}
	  if(y==0)
	  {z=0;}
	  if(x==0)
	  {k=0;}
	  z=z*1000+l*100+q;
  System.out.println("answer is :"+z);
 }
static int wordtonum(String word)
{
        int num = 0;
        switch (word) {
            case "one":  num = 1;
                     break;
            case "two":  num = 2;
                     break;
            case "three":  num = 3;
                     break;
            case "four":  num = 4;
                     break;
            case "five":  num = 5;
                     break;
            case "six":  num = 6;
                     break;
            case "seven":  num = 7;
                     break;
            case "eight":  num = 8;
                     break;
            case "nine":  num = 9;
                     break;
            case "ten": num = 10;
                     break;
            case "eleven": num = 11;
                     break;
            case "twelve": num = 12;
                     break;
            case "thirteen": num = 13;
                     break;
            case "fourteen": num = 14;
                     break;             
            case "fifteen": num = 15;
                     break;
            case "sixteen": num = 16;
                     break;
            case "seventeen": num = 17;
                     break;
            case "eighteen": num = 18;
                     break;
            case "nineteen": num = 19;
                     break;
            case "twenty":  num = 20;
                     break;
            case "thirty":  num = 30;
                     break;
            case "forty":  num = 40;
                     break;
            case "fifty":  num = 50;
                     break;
            case "sixty":  num = 60;
                     break;
            case "seventy":  num = 70;
                     break;
            case"eighty":  num = 80;
                     break;
            case "ninety":  num = 90;
                     break; 
            case "hundred": num = 100;
                        break;
            case "thousand": num = 1000;
                        break;     
           /*default: num = "Invalid month";
                             break;*/
        }
        return num;
    }
 }