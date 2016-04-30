#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int i=0;
struct book{
    char name[25];
    char author[25];
    char title[45];
};
 struct book boo[23];
int displayinfo(  );
void exit( );
int displayinfo();
int lobbytitle();
int lobnem( );
int lobnum( );
int bookinfo();
main()
{ int count=0;
int a,b;
if(count>=23)
{
    printf("please increase book variable \n");
}
lable :
printf("\n enter 2 for display book information \n enter 3 for list of book with author name  \n enter 4 for title of specified book \n enter 5 for list of count of book in library \n enter  6 list of  new arrival \n enter 7 for exit \n press 1 for add book infomation \n");
scanf("%d",&b);
switch(b)
{

    case 2:  displayinfo();
                break;
     case 3: lobbyau();
                break;
    case 4: lobbytitle();
                break;
    case 5:  lobnum();
                break;
    case 6: lobnem();
              break;
    case 7: exit(1);
             break;
     case 1: bookinfo();
               break;
       default:printf("press valid key  \n");
             break;

}
goto lable;

}
/*void exit1()
{
 exit();
}
*/


int displayinfo()
{
    int a;
    for(a=0;a<i;a++)
    {
        printf(" index %d \n book name =%s  \n  book author =%s  \n  book title=%s  \n",a,boo[a].name,boo[a].author,boo[a].title);
    }
return(0);
}

int lobbyau()
{int a,h,g=0;
char s[23];
printf("enter author name");
       scanf("%s",&s);

   for(a=0;a<i;a++)
   {

        h=strcmp(s,boo[a].author);
        if(h==0)
        {g=1;
          printf("book name is: \n%s  \n",boo[a].name);
        }

   }
   if(g<1)
   {
       printf("no book found");
   }
return(0);
}



int lobnum()
{
    printf(" \n total number of book in library is %d  \n",i);
    return(0);
}


int lobnem()
{ int x=i;
printf("book name%s\nauthor %s \n title%s",boo[x].name,boo[x].author,boo[x].title);


return(0);
}


int lobbytitle()
{
int n=0,f;
 char s[23];
    printf("enter book title  \n");
    scanf("%s",&s);
   for(f=0;f<i;f++)
   {
        n=strcmp(s,boo[f].title);
        if(n==0)
    {n=1;
        printf("name of book is %s \n",boo[f].name);
    }
   }
   if(n<1)
   {
       printf("no book found such as name ");
   }
    return(0);
}

int  bookinfo()
{
    printf("enter book name  \n");
    scanf("%s",&boo[i].name);
printf("enter book title name \n");
scanf("%s",&boo[i].title);
printf("enter author name\n");
scanf("%s",&boo[i].author);
i=i+1;
}
