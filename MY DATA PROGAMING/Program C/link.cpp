#include<iostream>
#include<stdlib.h>
	struct node{
		int data;
		struct node* next;
	}*head,*tail;

class linklist{
	public:
	int i,j;
	linklist()
	{
		head = NULL;
		tail=NULL;
	}
	struct node *getnode(int data);
	{
		if(head == NULL)
		{
			head = (struct node *)malloc(sizeof(struct node *));  
			cout<<"\n Enter Data\t";
			cin>>head->data;
		}
		
		
	}
	
};
void main()
{
	
	getch();
}
