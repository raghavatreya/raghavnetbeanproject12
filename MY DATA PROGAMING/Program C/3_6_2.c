#include<stdio.h>
#include<math.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
		clock_t begin, end;
double time_spent;
begin = clock();
    long int b=atol(argv[1]);
    long int c=atol(argv[2]);
    int power=atoi(argv[3]);
   c=c*power;
   //power=b;
    //long int inc=c;
    long int i=0;
   /* for(i=1;i<c;i++)
    {
                   b=b+power;    
    }*/
    i=b<<power;
    printf("Multiplication is %ld\n",i);
end = clock();
time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
printf("Execution time of %f",time_spent);
    getch();
    return 0;
    
}
