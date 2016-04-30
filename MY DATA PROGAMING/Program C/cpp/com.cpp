#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{

int i,s=0;
char j;
char A[100]="",B[100]="",C[100]="";
printf("Enter the first string \n");
gets(A);
printf("Enter the second string \n");
gets(B);
printf("Here i am comparing the both sting without case difference");
printf(" \n----------\n\n");

for(i=0;A[i]!='\0'|| B[i]!='\0';i++)
{
	if(A[i]==B[i])
	continue;
	else
	{ s=1;
    	printf("\n %d",(A[i]-B[i]));break;
	}
}
if(s==1)
printf("Here i am comparing the both sting are not equal\n");
else
{ 
printf("\n\nEqual sting\n\n");
}

s=0;
printf(" \n----------\n\n");

printf("Here i am going to avoid case");
for(i=0;A[i]!='\0'|| B[i]!='\0';i++)
{
	if((A[i]+32)==(B[i]+32) || (A[i]-32)==(B[i]-32))
	continue;
	else
	{ s=1;
	  printf(" \n %d",(A[i]-B[i])); break;}
}
if(s==1)
printf("Here i am comparing the both sting are not equal\n");
else
{ 
printf("\n\nEqual sting\n");
}
printf("\n----------\n\n");
s=strlen(A);
for(i=0;A[i]!='\0';i++)
C[s-i]=A[i];
puts(C);
printf(" \n----------\n\n");

printf("Converting srting into lowercase");
for(i=0;A[i]!='\0';i++)
{if(A[i]>=97)
 A[i]=A[i]-32;//uppper
}
puts(A);
printf(" \n----------\n\n");

printf("Converting srting into Uppercase");
for(i=0;A[i]!='\0';i++)
{if(A[i]<=)
	if(A[i]<97||)
 A[i]=A[i]+32;//uppper
}
puts(A);
printf("\n----------------------\n\nInserting a element into string\n\n");
printf("Enter the index\n");
scanf("%d",&s);
printf("\nEnter the character \n\n");
// here scanf is not working properly
scanf("%s",&j);
for(i=0;A[i]!='\0';i++)
{if(i==s)
{
A[i]=j;}
}
puts(A);
getch();	
return 0;	
}
