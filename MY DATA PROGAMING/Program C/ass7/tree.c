#include<stdio.h>
#include<stdlib.h>
struct node
{
       int info;
       struct node *lptr,*rptr;
};
typedef struct node tree;
void insert(int);
void display(tree*,int);
void search(tree*,int);
void inorder(tree*);
void postorder(tree*);
void preorder(tree*);
tree *copy(tree*);
tree*root=NULL;
tree *ne=NULL;

tree *del(tree *r,tree*q)
{
     printf("reached");
     
     tree *dn;
     if(r->rptr!=NULL)
      r->rptr=del(r->rptr,q);
      else
      {
      dn=r;
      q->info=r->info;
      r=r->lptr;
      free(dn);
      }
 return(r);
}

tree * deltree(tree *r,int item)
{
     tree *temp;
     if(!r)
     {
           printf("tree empty");
           return(r);
     }
    else
    {
       if(item< r->info)
       r->lptr=deltree(r->lptr,item);
       else
       if(item > r->info)
       r->rptr=deltree(r->rptr,item);
       else
       {
           temp=r;
           if(temp->rptr==NULL)
           {
              r=temp->lptr;
              free(temp);
           }
           else
           if(temp->lptr==NULL)
           {
               r=temp->rptr;
               free(temp);
           }
           else
           temp->lptr=del(temp->lptr,temp);
     } 
 }
 return(r);
} 

main()
{
    int ch,level=1,ele,root1,v,flag=0;
    do
    {
      printf("enter the choice\n");
      printf("1:insert()\n");
      printf("2:display()\n");
      printf("3:inorder()\n");
      printf("4:postorder()\n");
      printf("5:preorder()\n");
      printf("6:deltree()\n");
      printf("7:copy()\n");
      printf("8:search()\n");
     scanf("%d",&ch);
     switch(ch)
     {
            case 1:printf("enter the element to insert\n");
                   scanf("%d",&ele);
                   fflush(stdin);
                   insert(ele);
                   break;
            case 2:printf("contents of tree\n");
                   display(root,level);
                   break;
            case 3:printf("inorder is\n");
                   inorder(root);
                   break;
            case 4:printf("postorder\n");
                   postorder(root);
                   break;
            case 5:printf("preorder\n");
                   preorder(root);
                   break;
            case 6:printf("enter the element to delete\n");
                   scanf("%d",&ele);
                   root=deltree(root,ele);
                   break;
            case 7:printf("copying tree\n");
                   ne=copy(root);
                   display(ne,level);
                   getch();
                   break;
            case 8:printf("enter the element ");
                   scanf("%d",&v);
                   search(root,v);
            default:printf("invalid choice\n");
                    break;
        }
       }
       while((ch>0)&&(ch<7));
     }
    void insert(int item)
    {
         tree *temp,*cur,*ptr;
         temp=(tree*)malloc(sizeof(tree));
         temp->info=item;
         temp->lptr=NULL;
         temp->rptr=NULL;
         if(root==NULL)
          root=temp;
         else
         {
             cur=root;
             while(cur!=NULL)
             {
               ptr=cur;
               if(item==cur->info)
                   {
                   printf("Similar data\n");
                   break;
                   }
               if(item>cur->info)
               cur=cur->rptr;
              else
              cur=cur->lptr;
              } 
             if(ptr->info<item)
             ptr->rptr=temp;
             else
             ptr->lptr=temp;
          }
       }
   void display(tree *temp,int l)
   {
        int i;
        if(temp!=NULL)
        {
         display(temp->rptr,l+5);
         for(i=0;i<l;i++)
         printf(" ");
         printf("%5d\n",temp->info);
         display(temp->lptr,l+5);
         }
    }
  void inorder(tree *root)
  {
       if(root)
       {
               inorder(root->lptr);
               printf("%d\t",root->info);
               inorder(root->rptr);
       }
  }
  void postorder(tree *root)
  {
       if(root)
       {
               postorder(root->lptr);
               postorder(root->rptr);
               printf("%d\t",root->info);
        }
  }
 void preorder(tree *root)
 {
      if(root)
      {
              printf("%d\t",root->info);
              preorder(root->lptr);
              preorder(root->rptr);
      }
 }                          





void search(tree *root,int v)
{

	if(root == NULL)
	{
	puts("\n Item Does Not Exist.....");
	getch();
	}
	else if(v==root->info)
	printf("\n Number Found :%d",v);
	else if(v < root->info)
	search(root->lptr,v);
	else
	search(root->rptr,v);
	getch();
}


 tree *copy(tree *root)
{
     
         tree *cur,*ne;
         int l=0;
         if(root==NULL)
         {
           return NULL;
          }
          
         else
         {
             cur=root;
         
               ne=(struct tree*)malloc(sizeof(tree));
               ne->info=cur->info;
              ne->lptr=copy(cur->lptr);
              ne->rptr=copy(cur->rptr);
          }
         
       return(ne);
     
       }

