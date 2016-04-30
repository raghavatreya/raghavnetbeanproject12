#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
int i=0;
char A[100]=" ";
char j;
printf("Enter a string \n");
gets(A);
printf("Enter the charater you want to search");
scanf("%c",&j);
for(i=0;A[i]!='\0';i++)
{
 if(A[i]==j)
 {
  printf(" index of searching charcter is  %d \n",(i));
 }
 }

getch();
return 0;
}
