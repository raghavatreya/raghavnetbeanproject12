#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>
int main()
{  int *p;
   char *c;   
   p=(int *)malloc(sizeof(int));
   c=(char *)malloc(sizeof(char));
   *c='A';
   printf("Enter the value of P\n");
   scanf("%d",*(&p));fflush(stdin);
  
   printf("%d\n",*p);
   printf("%c\n",*c);
  
   free(p);
   free(c);
  
  printf("Enter The \n\n\n\n\n\n\n\n\n\n\n\n\n\n ");
   printf(" The value of '\"'p'\"' after the free function%d\n",p);
   printf("%c\n",*c);
  
   getch();
   return 0;
}
