#include<stdio.h>
float twomax(float , float ,float ,float * ,float *);
main()
{
float a,b,d,c,f;
printf("enter the value of a b c ");
scanf("%f%f%f",&a,&b,&c);
twomax(a,b,c,&d,&f);
printf("%f %f",&d,&f);
}
float twomax(float a,float b,float c ,float *q, float *p)
{ float u[3],k;
int i,j;
u[0]=a;
u[1]=b;
u[2]=c;
for(i=0;i<2;i++)
{k=u[i];
for(j=1;j<3;j++)
{if(u[j]>k)
{
u[i]=u[j];
u[j]=k;
k=u[i];
}
}
printf("%f%f",&u[0],&u[1]);
*p=u[0];
*q=u[1];
}
}


