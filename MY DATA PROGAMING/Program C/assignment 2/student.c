#include<stdio.h>
#include<conio.h>
struct stuinfo
{
  char sname[100],sadd[200];
  int date,month,year;
  char adm[10];
}s;     


int main()
{
  int opt1,x;
 while(x!=0)
 {
  printf("\n***MENU***");
  printf("\n 1.insert");
  printf("\n 2.modify");
  printf("\n 3.display_info");
  printf("\n 4.exit");
   printf("\n enter ur choice:");
  scanf("%d",&opt1);
  switch(opt1)
  {
             case 1:
                      insert();
                     break;
             case 2:                     
                 modify();
                  break;
  
             case 3:
                    display();
                    break;                             
             case 4:
                    exit(0);
 
                          default:
                                  printf("\nwrong choice");     
}
}
   
   getch();
   return 0;
     
}
 insert()
{
      printf("\n enter  student name:");
   scanf("%s",s.sname);
   printf("\n enter student address:");
   scanf("%s",s.sadd);
   fflush(stdin);
   printf("enter date of birth:");
   scanf("%d",&s.date);
   printf("enter month of birth:");
   scanf("%d",&s.month);
   printf("enter year of birth:");
   scanf("%d",&s.year);
   printf("\n enter admission number:");
   scanf("%s",s.adm);  
}
 modify()
{
  int opt2;
  printf("\n1.enter student name:");
  printf("\n2.enter student address:");
  printf("\n3.enter student date :");
  printf("\n4.enter student month:");
  printf("\n5.enter student year:");
  printf("\n6.enter student adm number:");    
  printf("\n enter ur choice to modify info:");
  scanf("%d",&opt2);
   switch(opt2)
   {
       case 1:
           fflush(stdin);
            printf("\n  enter new student name:");
            scanf("%s",s.sname);
            break;
       case 2:
                       fflush(stdin);
            printf("\n  enter new student address:");
            scanf("%s",s.sadd);
            break;
       case 3:
            printf("\n  enter new student date:");
            scanf("%d",&s.date);
            break;
       case 4:
            printf("\n  enter new student month:");
            scanf("%d",&s.month);
            break;
       case 5:
            printf("\n  enter new student year:");
            scanf("%d", & s.year);
            break;
       case 6:
                       fflush(stdin);
            printf("\n  enter new student adm number:");
            scanf("%s",s.adm);
            break;
       default:
               printf("\n wrong choice:");

}              

}
  display()
{
   printf("\n   student name is:%s",s.sname);
   printf("\n   student address is:%s",s.sadd);
   printf("\n   student date of birth is:%d/%d/%d",s.date,s.month,s.year);
   printf("\n   student admission number is:%s",s.adm);
}

