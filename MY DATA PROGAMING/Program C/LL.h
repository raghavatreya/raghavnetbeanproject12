#include<iostream.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

	struct node
	{
			int data;
			struct node* link;
	}*head=NULL;
int count=0;
class linklist
{
	//int m,n,A[m][n];
	public:
	linklist()
	{
	  // *head=NULL;
	}
	void insert()
	{
		++count;
		clrscr();
		if(head == NULL)
		{
			head = (struct node *)malloc(sizeof(struct node *));
			  cout<<"\nEnter Data";
			  cin>>head->data;
				return ;
		}

		struct node *temp,*temp1;
		temp = (struct node *)malloc(sizeof(struct node *));
		temp1 = (struct node *)malloc(sizeof(struct node *));
				 cout<<"\n Enter Data";
				 cin>>temp->data;
				 temp->link=NULL;
				temp1 = head;
		int pos,i;
			cout<<"\n Enter position";
			cin>>pos;

						if(pos==1)
						{
							temp->link = head;
							head = temp;
						}
						else if(pos>1 && pos<count-1)
						{    i=pos;
								temp1 = head;
								for(i=1;i<count;++i)
								{
								   if(pos == i)
									 {			struct node* temp2;
										temp2 = (struct node *)malloc(sizeof(struct node *));
														temp2 = temp1;
														temp1=temp1->link;
															  temp->link=temp1;
											     temp2->link = temp;
										 cout<<"\ninside for loop if statement";
										 return;
									 }
									 else {
											temp1 = temp1->link;
									 }
									 //cout<<"\nfor loop of pos else statement \n";
								}
						}
						else if(pos>=count-1) // count is number of  element
						{
									while(temp1->link)
									{
										cout<<"\n inside while loop";
										temp1 = temp1->link;
									}
									temp1->link = temp;
						}


}
	void printdata()
	{	clrscr();
		struct node* temp;
		temp = (struct node *)malloc(sizeof(struct node *));
		temp = head;
		while(temp)
		{
			cout<<"\t"<<temp->data;
			temp=temp->link;
		}

	}
};
void main()
{
clrscr();
int i;
linklist A;
while(1)
{
cout<<"\n1.For Insert \n2. For Printdata\n3.For Exit";
cin>>i;
if(i==1)
A.insert();
else if(i==2)
A.printdata();
else
exit(1);
}
getch();
}