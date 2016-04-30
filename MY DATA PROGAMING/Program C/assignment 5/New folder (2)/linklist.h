struct s{
       int n;
       struct s *next;
}*start,*current;

int len=0;

int showMenu()
{
    int select;

    printf("2.Display\n");
    printf("3.Push  (Insert)\n");
    printf("4.Pop   (DELETE)\n");
    printf("5.Peep\n");
    printf("0.EXIT\n\n");

    printf("Select option :");
    scanf("%d",&select);
    return select;
}

int showMenu2()
{
    int select;

    printf("1.Display\n");
    printf("2.Front Insertion\n");
    printf("3.Front Deletion\n");
    printf("4.Rear Insertion\n");
    printf("5.Rear Deletion\n");
    printf("0.EXIT\n\n");

    printf("Select option :");
    scanf("%d",&select);
    return select;
}

int showMenu3()
{
    int select;

    printf("CIRCULAR LINK LIST\n\n");
    printf(" 2.Display\n");
    printf(" 3.Insert\n");
    printf(" 4.Delete\n");
    printf(" 0.EXIT\n\n");

    printf("Select option :");
    scanf("%d",&select);
    return select;
}


void push(int data)
{
     struct s *newNode;
     newNode=(struct s*)malloc(sizeof(struct s));
     /*
     printf("Enter no:");
     scanf("%d",&newNode->n);
     */
     newNode->n=data;

     if(start==NULL)
     {
         start=newNode;
         current=newNode;
         current->next=NULL;
     }

     else
     {
         current->next=newNode;
         current=current->next;
         current->next=NULL;
     }
}

void display()
{
     struct s *temp;
     temp=start;

      if(temp == NULL)
      {
              printf(" Empty List \n");
      }

      while(temp!=NULL)
      {
         printf(" %d  ",temp->n);
         temp=temp->next;
      }
}

void displaycll()
{
     struct s *temp;
     temp=start;

      if(temp!=NULL)
      {
        do
        {
            printf(" %d  ",temp->n);
            temp=temp->next;
        }while(temp!=start);
      }
      else
      {
          printf("Empty circuler linked list \n");
          }
}

void pop()
{
    if(start==NULL)
    {
                   printf("\n Underflow \n");
    }

    else
    {
        start=start->next;
    }
}

void peep()
{
     struct s *temp;
     temp=start;

      while(temp->next!=NULL)
      {
         temp=temp->next;
      }
       printf("\n %d  \n",temp->n);
}

void popInStack()
{

         struct s *temp;
         temp=start;

         if(start==NULL)
         {
            printf("\nUnderflow\n");
         }

         else if(start->next==NULL)
         {
              start=NULL;
         }

         else
         {

               while((temp->next)->next!=NULL)
               {
               printf("\n%d",temp->n);
               temp=temp->next;
               }
                    temp->next=NULL;
           }

}

void insertionSort(int data)
{
    s *newNode;
    newNode=(s *)malloc(sizeof(s));

    /*
    printf("Enter data : ");
    scanf("%d",&newNode->n);*/
    newNode->next=NULL;
    
    newNode->n=data;

    if(start==NULL || start->n>newNode->n)
    {
        newNode->next=start;
        start=newNode;
    }
    else
    {
        current=start;

        while((current->next!=NULL) && (current->next->n <= newNode->n )) // comparing data of next and new node
            {
                current=current->next;
            }
        newNode->next=current->next;
        current->next=newNode;
    }

    len++;
}

void wholeDelete()
{
    start=NULL;
    len=0;
}


void frontInsertion(int data)
{
    s *newNode;
    newNode=(s *)malloc(sizeof(s));
    /*
    printf("Enter data : ");
    scanf("%d",&newNode->n);
    */
    newNode->n=data;
    newNode->next=NULL;
    
    if(start==NULL)
        {
            start=newNode;
        }

    else
    {
        newNode->next=start;
        start=newNode;
    }
    len++;
}

void frontDeletion()
{
    if(start==NULL)
    {
         printf("\n\n\n****UNDERFLOW****\n\n\n");
         system("pause");
    }
    else
    {
        start=start->next;
        len--;
    }
}

void rearInsertion(int data)
{
    s *newNode;
    newNode=(s *)malloc(sizeof(s));
    /*
    printf("Enter data : ");
    scanf(" %d",&newNode->n);
    */
    newNode->next=NULL;
    newNode->n=data;

    if(start==NULL)
    {
        start=newNode;
    }
    else
    {
        current=start;
        while(current->next!=NULL)
        current=current->next;
        current->next=newNode;
    }

    len++;
}

void rearDeletion()
{
     if(start==NULL)
     {
         printf("\n\n\n****UNDERFLOW****\n\n\n");
         system("pause");
     }

     else if(start->next==NULL)
     {
         start=NULL;
         len--;
     }

     else
     {
        current=start;
        while(current->next->next!=NULL)
        {
            current=current->next;
        }
        current->next=NULL;
        len--;
     }
}

void insertItem()
{
     struct s *newNode;
     newNode=(struct s*)malloc(sizeof(struct s));

     printf("Enter no:");
     scanf("%d",&newNode->n);
     newNode->next=start;

     if(start==NULL)
     {
         start=newNode;
         start->next=start;
     }

     /*else if(start->next==start)
        start->next=newNode;*/


     else
     {
         current=start;
        do
        {
            current=current->next;
        }while(current->next!=start);
        current->next=newNode;
     }
}

void deleteItem()
{
    if(start==NULL)
    {
                   printf("\nUnderflow\n");
    }

    else if(start->next==start)
    {
        start=NULL;
    }

    else
    {
        current=start;
        do
        {
            current=current->next;
        }while(current->next->next!=start);
        current->next=start;
    }
}
