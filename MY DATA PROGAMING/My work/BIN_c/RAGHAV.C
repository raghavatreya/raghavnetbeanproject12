#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char a[200]=" ",b[10]=" ";
  int i,j,k,n,count=0;
  clrscr();
  printf("ENTER FIRST  STRING \n\n");
  gets(a);
  printf("ENTER SECOND STRING\n\n");
  gets(b);
  clrscr();
  printf(" \n\n FIRST STRING IS :\n");
  puts(a);
  printf(" \n\n SCOEND STRING IS:\n\n");
  puts(b);
  printf("*******  ************");
  strcat(a," ");
  k=strlen(b);
  k-=1;
  for(i=0;a[i]!=NULL;i++)
  {
     lable1:
     j=0;
		       if(i>0)
			 {
			      if(a[i-1]==' ')
			      {  if(a[i]==b[j] && a[i+k+1]==' ')
				  {

				    for(j=1,i=i+1;b[j]!=NULL;i++,j++)
					 {
					  if(a[i]==b[j])
						{ count++; }
					  else
						{  goto lable1; }
					 }
					 }

			  }  }
			  else
			  {
			      if(a[i-1]==' ')
			      {	 if(a[i]==b[j] && a[i+k+1]==' ')
				 {
				      for(j=1,i=i+1;b[j]!=NULL;i++,j++)
				      {
					if(a[i]==b[j])
					{  count++;}
					else
					{  goto lable1;  }
				      }

				}
			  }  }

  }
  count/=k;
  printf("\n\n\n  %d",count);
  getch();
}