#include<stdio.h>
#include<conio.h>
int getfact(int k)
{
   
   if(k==1)
   return 1;
   k=k*getfact(k-1); 
    return k;
    }
int main()
{
    int i,j,k=0,x,d=0;
    printf("\n enter the number \n\n");
    scanf("%d",&i);
   k=getfact(i); 
printf("%d",k);
getch();
return 0;
}
