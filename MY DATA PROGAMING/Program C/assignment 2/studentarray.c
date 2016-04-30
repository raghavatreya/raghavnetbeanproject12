#include<stdio.h>
struct class{
  char sname[100],sadd[200];
  int date,month,year;
  char adm[10];
  struct marks{
  int intm[3],midm[3],endm[3];

  }m;

}s[10];
int n=1,p,i=1;
int main()
{
int opt1,x;
 while(x!=0)
 {
  printf("\n***MENU***");
  printf("\n 1.insert_info");
  printf("\n 2.modify_info");
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
                 modify_info();
                  break;

             case 3:
                    display_info();
                    break;

             case 4:
                    x=0;
                    break;

                          default:
                                    printf("\nexited");
}
}
 
  return 0;

}
int insert_info()
{
    printf("\n enter %d information:",n);
    fflush(stdin);
    printf("\nenter  student name:");
    gets(s[n].sname);
    printf("enter student address:");
    gets(s[n].sadd);
    fflush(stdin);
    printf("enter date of birth:");
    scanf("%d",&s[n].date);
    printf("enter month of birth:");
    scanf("%d",&s[n].month);
    printf("enter year of birth:");
    scanf("%d",&s[n].year);
    printf("enter admission number:");
    scanf("%s",s[n].adm);
    do{
    printf("\n enter  subject marks:%d",i);
    printf("\n enter internal marks:");
    scanf("%d",&s[n].m.intm[i]);
    printf("\n enter mid test marks:");
    scanf("%d",&s[n].m.midm[i]);
    printf("\n enter end sem marks:");
    scanf("%d",&s[n].m.endm[i]);
    i++;
    }while(i<=3);
    system("cls");
    n++;
}
modify_info()
{
  printf("enter the number of info to modify:");
  scanf("%d",&p);
  if(p>n)
    printf("info not entered yet");
  else{
  int opt2;
  printf("\n1.enter student name:");
  printf("\n2.enter student address:");
  printf("\n3.enter student date :");
  printf("\n4.enter student month:");
  printf("\n5.enter student year:");
  printf("\n6.enter student adm number:");
  printf("\n7.enter 1st subject marks:");
  printf("\n8.enter 2nd subject marks:");
  printf("\n9.enter 3rd subject marks:");
  printf("\n enter ur choice to modify info:");
  scanf("%d",&opt2);
  system("cls");
   switch(opt2)
   {
       case 1:
            fflush(stdin);
            printf("\n  enter new student name:");
            gets(s[p].sname);
            break;
       case 2:
            fflush(stdin);
            printf("\n  enter new student address:");
            scanf("%s",s[p].sadd);
            break;
       case 3:
            printf("\n  enter new student date:");
            scanf("%d",&s[p].date);
            break;
       case 4:
            printf("\n  enter new student month:");
            scanf("%d",&s[p].month);
            break;
       case 5:
            printf("\n  enter new student year:");
            scanf("%d", & s[p].year);
            break;
       case 6:
                       fflush(stdin);
            printf("\n  enter new student adm number:");
            scanf("%s",s[p].adm);
            break;
       case 7:
             printf("\n enter internal marks:");
            scanf("%d",&s[n].m.intm[1]);
            printf("\n enter mid test marks:");
            scanf("%d",&s[n].m.midm[1]);
            printf("\n enter end sem marks:%d");
            scanf("%d",&s[n].m.endm[1]);

       case 8:
             printf("\n enter internal marks:");
            scanf("%d",&s[n].m.intm[2]);
            printf("\n enter mid test marks:");
            scanf("%d",&s[n].m.midm[2]);
            printf("\n enter end sem marks:%d");
            scanf("%d",&s[n].m.endm[2]);

       case 9:
             printf("\n enter internal marks:");
            scanf("%d",&s[n].m.intm[3]);
            printf("\n enter mid test marks:");
            scanf("%d",&s[n].m.midm[3]);
            printf("\n enter end sem marks:%d");
            scanf("%d",&s[n].m.endm[3]);
            break;
          default:
               printf("\n wrong choice:");

}

}
}

display_info()
{
  printf("\n enter the info number to display");
  scanf("%d",&p);
  if(p>n)
    printf("not yet entered");
  else{
    system("cls");
   printf("\n   student name of %d is:%s",p,s[p].sname);
   printf("\n   student address of %d is:%s",p,s[p].sadd);
   printf("\n   student date of birth of %d is:%d/%d/%d",p,s[p].date,s[p].month,s[p].year);
   printf("\n   student admission number of %d  is:%s",p,s[p].adm);
   printf("\n   1st sub internal mid test end sem marks:%d %d %d",s[p].m.intm[1],s[p].m.midm[1],s[p].m.endm[1]);
   printf("\n   2nd sub internal  mid end marks:%d %d %d ",s[p].m.intm[2],s[p].m.midm[2],s[p].m.endm[2]);
   printf("\n   3rd sub internal mid end marks:%d %d %d",s[p].m.intm[3],s[p].m.midm[3],s[p].m.endm[3]);
  }
}
