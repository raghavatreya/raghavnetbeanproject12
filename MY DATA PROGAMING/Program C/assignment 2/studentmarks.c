#include<stdio.h>
struct marks{
int intm,midm,endm;
}s[10];
int main()
{
    int opt1,x;
    while(x!=0)
    {
         printf("\n***MENU***");
  printf("\n 1.insert_marks");
  printf("\n 2.modify_marks");
  printf("\n 3.display_marks");
  printf("\n 4.exit");
  printf("\n enter ur choice:");
  scanf("%d",&opt1);
  switch(opt1)
  {
             case 1:
                    insert_marks();
                     break;
             case 2:
                 modify_marks();
                  break;

             case 3:
                    display_marks();
                    break;

             case 4:
                    exit(0);

                          default:
                                  printf("\nwrong choice");
}
    }
return 0;
}
insert_marks()
{
printf("\n enter ")
}
modify_marks()
{

}
display_marks()
{

}
