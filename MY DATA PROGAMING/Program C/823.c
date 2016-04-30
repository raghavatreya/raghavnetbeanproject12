#include<stdio.h>
int armstrong(int );
int perfect();
int palindrome();
int digit();
main()
{
int a,b,c,d;
printf("enter the value of a");
scanf("%d",a);
b=armstrong(a);
c=perfect(a);
d=palindrome();
}
int armstrong(int q)
{

}
int palindrome(int q)
{
int k=q,h=0,g,d;
for(;k>0;)
{g=digit(k);
h=10*h+g;
k=k/10
}
if(a==h)
{printf("enter number is palindrome");
}
else
{
printf("enter number is not a palindrome ");
}
}
int digit(int q)
{
l=q%10;
}
int arms


