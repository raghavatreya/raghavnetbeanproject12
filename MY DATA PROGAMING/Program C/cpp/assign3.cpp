#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
int i,j,k,p=0,y=0;
char A[100],B[100],C[200];

printf("Enter string \n");
gets(A);
printf("Enter strating index \n");
scanf("%d",&k);
printf("Enter the last string index \n");	
scanf("%d",&j);
printf("Enter substring \n");
gets(B);
for(i=0;A[y]!='\0';i++)
{
	
	if(i>=k || j<=i)
	{
		C[i]=B[p];p++;
	} 	
	else
	{
		C[i]=A[y];y++;
	}
}
puts(C);
getch();
return 0;
}

