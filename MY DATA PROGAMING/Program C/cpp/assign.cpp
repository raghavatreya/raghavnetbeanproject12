#include<stdio.h>
#include<conio.h>
#include<string.h>
//#include "raghav.h"
int main()
{
// concotaing to string 
int a=0;
char A[100]=" ",B[100]=" ";
printf("Enter the string \n");
gets(A);
printf("Enter another string \n");
gets(B);
int i,j=0,g=0;
j=strlen(A);
 g=strlen(B);
char C[j+g];
for(i=0;i<j+g;i++)
{
  if(i<j)
  {
   C[i]=A[i]; 
  }
  else
  {
   C[i]=B[i-j];
  }
}
printf("Answer is :\n");
puts(C);
getch();
return 0;
}
