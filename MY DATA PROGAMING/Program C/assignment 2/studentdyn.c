#include<stdio.h>
#include<stdlib.h>
#define max 5
struct student{
char sname[100],sadd[200],adm[10];
 int dob,mob,yob;
 };
 int n=1,k,q,z;
 struct student *p;
 int main()
 {
p=(struct student *)malloc(max*sizeof(struct student)); 
 int opt1,x;
 while(x!=0)
  {
  printf("\n***MENU***");
  printf("\n 1.insert_info");
  printf("\n 2.delete_info");
  printf("\n 3.display_info");
  printf("\n 4.exit");
  printf("\n enter ur choice:");
  scanf("%d",&opt1);
  switch(opt1)
  {
             case 1:
                      insert_info();
                     break;
             case 2:
                 delete_info();
                  break;

             case 3:
                    display_info();
                    break;

             case 4:
                    x=0;
                      default:
                                  printf("\n exited");
}
}
return 0;
}
insert_info()
     {

    printf("\n enter %d information:",n);
    fflush(stdin);
    printf("\nenter  student name:");
    gets((p+n)->sname);
    printf("enter student address:");
    gets((p+n)->sadd);
   fflush(stdin);
   printf("enter date of birth:");
   scanf("%d",&(p+n)->dob);
   printf("enter month of birth:");
   scanf("%d",&(p+n)->mob);
   printf("enter year of birth:");
   scanf("%d",&(p+n)->yob);
   printf("enter admission number:");
   scanf("%s",(p+n)->adm);
    n++;
     }
 delete_info()
{

 printf("\n enter the number info to delete");
 scanf("%d",&k);
 z=k;
 if(k>n)
    printf("oops info not available!!");
 else
 {
while(k<=n)
{
    *(p+k-1)=*(p+k);
    k++;
}
n--;
 }
printf("\n info %d deleted:",z);
}


display_info()
{
    printf("\n enter info number to display:");
    scanf("%d",&q);
    if(q>n)
       {
        printf("info not yet entered");
       }
    else
    {
        printf("\n   student name of %d is:%s",q,(p+q)->sname);
   printf("\n   student address of %d is:%s",q,(p+q)->sadd);
   printf("\n   student date of birth of %d is:%d/%d/%d",q,(p+q)->dob,(p+q)->mob,(p+q)->yob);
   printf("\n   student admission number of %d  is:%s",q,(p+q)->adm);
}
}

