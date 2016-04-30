#include<stdio.h>
main()
{
int i,j,p,temp,k;
long int n;
printf("Enter the value of n:");
scanf("%d",&p);
for(i=0;i<=p;i++)
{
 for(k=1;k<=p-i;k++)
    {
    printf(" ");
    }
if(i==0)
{

}
else
{
n=1;
for(j=1;j<=i;j++)
{
n=n*11;
}
while(n>0)
{
temp=n%10;
n=n/10;
printf("%d ",temp);
}
}
printf("\n");
}
}
