#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>
struct raghav
{
    char name[200];
    char address[300];
    int day,month,year; 
    char addmission[10];
}raghav[1]; 

void INSERT(int N);
void DISPLAY(int N);
void MODIFICATION(int N);

int main()
{  int a;
    printf("ENter %d",sizeof(raghav));
    scanf("%d",&a);fflush(stdin);
  
  
   {
           printf(" Enter 1 insert student information\n");
           printf("Enter 2  modify student information(s) ");
           printf("Enter 3 to display student information(s)");
           scanf("%d",&a); 
   switch(a)
            {
                case 1: INSERT(2);
                         break;
                case 2: MODIFICATION(2);
                         break;
                case 3:  DISPLAY(2);
                         break;
                case 4:      exit(1);
                         break;
                default: printf(" Enter correct  key\n");           
   }
   }  
   while(1);
    
   getch(); 
    return 0;
    }
void INSERT(int N)
{
     for()
     }
void MODIFACTION(int N)
{
     for(int )
     }
