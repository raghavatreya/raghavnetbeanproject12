//#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
//asd
//class linklist{
//public:
struct node{
int data;
struct node *next;
}*head;
//*head = NULL;
typedef struct node;

//linklist()
//{
//}
void getdata()
{

  node *temp,*temp1;
  temp = (struct node *)malloc(sizeof(struct node));
  temp1 = (struct node *)malloc(sizeof(struct node));
  cout<<"\nEnter The Data";
  cin>>temp->data;
   if(!head)
   {
       head = (struct node *)malloc(sizeof(struct node));
      head->data=temp->data;
     head->next=NULL;
     return;
   }
  temp1=head;
   while(temp1)
  {
     temp1=temp1->next;
  }
  temp1->next=temp;
 // free(temp);
 // free(temp1);
clrscr();
  }
  void printdata()
  {
    node *temp;
    clrscr();
	temp = (struct node *)malloc(sizeof(struct node));
	temp = head;
	while(temp)
	{
	  cout<<"\t"<<temp->data<<"\n";
	  temp=temp->next;
	}
  }

//};
void main()
{
//linklist a;
clrscr();
while(1)
{
//   clrscr();
   int i;
   cout<<"1 for setdata\n2 for printdata\n";
   cin>>i;
   if(i ==1)
   getdata();
   else if(i == 2)
   printdata();
   else
   exit(1);
}
getch();
}