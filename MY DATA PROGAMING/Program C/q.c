#include <stdio.h>

int main ()
{
   /* an array with 5 elements */
   double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
   double *p;
   int i;

   p = balance;

   /* output each array element's value */
   printf( "Array values using pointer\n");
   for ( i = 0; i < 5; i++ )
   {
       printf("*(p + %d) : %f\n",  i, *(p + i) );
   }

   printf( "Array values using balance as address\n");
   for ( i = 0; i < 5; i++ )
   {
       printf("*(balance + %d) : %f\n",  i, *(balance + i) );
   }

   return 0;
}

/*    float p,q,r,s,t;
int a;
printf("give value of  p&  q");
scanf("%f%f",&p,&q);
printf("enter 1 for add :2 for subs : 3 for mul :4 for divsion:arthmetic process has to be done");
scanf("%d",&a);
switch( a)
{
    case 1:r=q+p;
       break;
    case 2:r=p-q;
       break;
    case 3:r=q*p;
       break;
    case 4:r=q/p;
       break;

}
printf("%f",r); */
}
