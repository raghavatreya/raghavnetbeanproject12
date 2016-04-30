#include<stdio.h>
struct book{
char name[20],author[20];
int id;
}s[5];
int top=-1,i;
int main()
{
    int opt,x;
    while(x!=0)
    {
    printf("\n***MENU***");
    printf("\n 1.PUSH");
    printf("\n 2.POP");
    printf("\n 3.PEEP");
    printf("\n 4.DISPLAY");
    printf("\n 5.exit");
    printf("\n enter ur choice:");
    scanf("%d",&opt);
    switch(opt)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        peep();
        break;
    case 4:
        display();
        break;
    case 5:
        x=0;
    default:
        printf("\n exited");
    }
    }
return 0;
}
push()
{
    if(top==4)
        printf("oops overflow!!");
    else{
        top++;
        printf("enter book info %d",(top+1));
        printf("\n enter book id:");
        scanf("%d",&s[top].id);
        fflush(stdin);
        printf("\n enter book name:");
        gets(s[top].name);
        printf("\n enter author name:");
        gets(s[top].author);
  }
 }
pop()
{
   if(top==-1)
    printf("oops underflow");
   else
   {
       printf("\n book id:%d",s[top].id);
       printf("\n book name:%s",s[top].name);
       printf("\n book author:%s",s[top].author);
       top--;
    printf("\n info deleted");
   }
   }
peep()
{
      if(top==-1)
        printf("oops underflow");
      else
      {
       printf("\n book id:%d",s[top].id);
       printf("\n book name:%s",s[top].name);
       printf("\n book author:%s",s[top].author);

}
}
display()
{
if(top==-1)
    printf("oops underflow");
else{
    for(i=top;i>=0;i--)
    {
       printf("\n book id:%d",s[i].id);
       printf("\n book name:%s",s[i].name);
       printf("\n book author:%s",s[i].author);
  printf("\n  __________________________________________");
    }

}

}
