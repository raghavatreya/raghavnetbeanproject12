#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<sys/time.h>
 
#define SIZE 5            /* Size of Queue */
int Q[SIZE],f=0,r=-1;       /* Global declarations */
 
Qinsert(int elem)
{                       /* Function for Insert operation */
 if( Qfull()) printf("\n\n Overflow!!!!\n\n");
 else
 {
  ++r;
  Q[r]=elem;
 }
}
 
int Qdelete()
{                      /* Function for Delete operation */
 int elem;
 if(Qempty()){ printf("\n\nUnderflow!!!!\n\n");
 return(-1); }
 else
 {
  elem=Q[f];
  f=f+1;
  return(elem);
 }
}
 
int Qfull()
{                     /* Function to Check Queue Full */
 if(r==SIZE-1) return 1;
 return 0;
}
 
int Qempty()
{                    /* Function to Check Queue Empty */
 if(f > r) return 1;
 return 0;
}
 
display()
{                  /* Function to display status of Queue */
 int i;
 if(Qempty()) printf(" \n Empty Queue\n");
 else
 {
  printf("Front->");
  for(i=f;i<=r;i++)
   printf("%d ",Q[i]);
  printf("<-Rear");
 }
}
 
void main()
{                         /* Main Program */
 int opn,elem;
 do
 {
  //clrscr();
  printf("\n ### Queue Operations ### \n\n");
  printf("\n Press 1-Insert \n press 2-Delete \n press 3-Display \n press 4-Exit\n");
  printf("\n Your option ? ");
  scanf("%d",&opn);
  switch(opn)
  {
  case 1: printf("\n\nRead the element to be Inserted ?");
  scanf("%d",&elem);
  Qinsert(elem); break;
  case 2: elem=Qdelete();
  if( elem != -1)
   printf("\n\nDeleted Element is %d \n",elem);
  break;
  case 3: printf("\n\nStatus of Queue\n\n");
  display(); break;
  case 4: printf("\n\n Terminating \n\n"); break;
  default: printf("\n\nInvalid Option !!! Try Again !! \n\n");
  break;
  }
  printf("\n\n\n\n  Press a Key to Continue . . . ");
  getch();
 }while(opn != 4);
}
