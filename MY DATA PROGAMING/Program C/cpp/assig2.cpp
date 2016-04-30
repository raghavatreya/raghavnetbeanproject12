#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
int i,j,k;
char A[100],B[100];
printf("Enter string \n");
gets(A);
//j=strlen(A);  // i am unable to last indexing
printf("Enter strating index \n");
scanf("%d",&k);
printf("Enter the last string index \n");	
scanf("%d",&j);
for(i=0;A[i]!='\0';i++)
{
if(i>=k)
{
	if(i>=j)
	 continue;
	 B[i-k]=A[i];
} 
}
puts(B);
getch();
return 0;
}

