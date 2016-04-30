#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

using namespace std;

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
//		clrscr();
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
						else if(pos>1 && pos<=count-1)
						{    i=pos;
								temp1 = head;
								for(i=1;i<count;++i)
								{
								   if(pos == i+1)
									 {			struct node* temp2;
										          temp2 = (struct node *)malloc(sizeof(struct node *));
											      temp2 = temp1;
											      temp1=temp1->link;
											      temp->link=temp1;
											      temp2->link = temp;
										// cout<<"\ninside for loop if statement";
										 return;
									 }
									 else {
											temp1 = temp1->link;
									 }
									 //cout<<"\nfor loop of else statement \n";
								}
						}
						else if(pos>count-1) // count is number of  element
						{
									while(temp1->link)
									{
										//cout<<"\n inside while loop";
										temp1 = temp1->link;
									}
									temp1->link = temp;
						}


}
	void printdata()
	{	//clrscr();
        struct node * temp;
        temp=(struct node*)malloc(sizeof(struct node *));
		temp = head;
		while(temp)
		{
			cout<<"\t"<<temp->data;
			temp=temp->link;
		}
        free(temp);
	}
	void deletedata()
	{
//		clrscr();
		int i;
		struct node* temp;
		temp = (struct node *)malloc(sizeof(struct node *));
		temp=head;
		cout<<"\n1 for Front delete \n 2 for End Delete \n 3 for at any position deletion \n";
		cin>>i;
		if(i==1)
		{
			head = head->link;
		}
		else if(i==2)
		{
			while((temp->link)->link)
			{
				temp = temp->link;
			}
			temp->link=(temp->link)->link;
		}
		else if(i==3)
		{
			cout<<"\n Enter position ";
			cin>>i;
			while(i>0)
			{
				if(i==1)
				{
					temp->link=(temp->link)->link;
				}
				temp=temp->link;
				--i;
			}
		}
	}
};
int main()
{
//clrscr();
int i;
linklist A;
while(1)
{
cout<<"\n1.For Insert \n2. For Print data (Tavarse the list)\n3.For Exit\n4.delete node";
cin>>i;
if(i==1)
A.insert();
else if(i==2)
A.printdata();
else if(i==3)
exit(1);
else if(i==4)
 A.deletedata();
}
getch();
return 1;
}
