#include<stdio.h>
float max(float a, float b);
main()
{
float a,b,c;
printf("enter the value of a and b ");
scanf("%f%f",&a,&b);
c=max(a,b);
printf("%f",c);
}
float max(float x,float y)
{
float q;
if(x>y)
{return(x);
}
else
{
return(y);
}
}





