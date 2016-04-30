#include<stdlib.h>
#include<stdio.h>

struct bin_tree {
int data;
struct bin_tree * right, * left;
};
typedef struct bin_tree node;
    node *root;

//void del();
void insert(node ** tree, int val)
{
    node *temp = NULL;
    if(!(*tree))  // for  root node is empty
    {  // allocating memory to tree's first node
        temp = (node *)malloc(sizeof(node));
        temp->left = temp->right = NULL;
        temp->data = val;
        *tree = temp;
        return;
    }

    if(val < (*tree)->data)
    {
        insert(&(*tree)->left, val);
    }
    else if(val > (*tree)->data)
    {
        insert(&(*tree)->right, val);
    }

}

void print_preorder(node * tree)
{
    if (tree)
    {
        printf("%d\n",tree->data);
        print_preorder(tree->left);
        print_preorder(tree->right);
    }

}

void print_inorder(node * tree)
{
    if (tree)
    {
        print_inorder(tree->left);
        printf("%d\n",tree->data);
        print_inorder(tree->right);
    }
}

void print_postorder(node * tree)
{
    if (tree)
    {
        print_postorder(tree->left);
        print_postorder(tree->right);
        printf("%d\n",tree->data);
    }
}
void del(node ** tree,int data )
{
     int i=0;
     int val = data;
    if(!(*tree))
    {
        return ;
    }

    if(val == ((*tree)->left)->data)
    {
        (*tree)->left = NULL;     //  if(-data
        //del(&((*tree)->left), val);
    }
    else if(val == ((*tree)->right)->data)
    {    (*tree)->right = NULL;
         // search(&((*tree)->right), val);
    }
    else if(val > (*tree)->data )
    {
         del((*tree)->right,val);
         }
     else
     {
         del((*tree)->left,val);
         }    
}


void search(node ** tree, int val)
{
     int i=0;
    if(!(*tree))
    {
        return ;
    }

    if(val < (*tree)->data)
    {
        search(&((*tree)->left), val);
    }
    else if(val > (*tree)->data)
    {
        search(&((*tree)->right), val);
    }
    else if(val == (*tree)->data)
    {
       // return *tree; 
        
          while((*tree)->right != NULL)
          {  
                      (*tree)->data = ((*tree)->right)->data;
                      (*tree) = (*tree)->right;               
                       i=1;   
                          }

          while((*tree)->left != NULL)
          {  
                      (*tree)->data = ((*tree)->left)->data;
                      (*tree) = (*tree)->left;               
                          i=1;
                          }
           if(i ==0 )                 
            // free(*tree);
          {
               node* temp2 =   (node *)malloc(sizeof(node));
               del(&root,val);       
               }  
        
    }
}

int main()
{
    int input_data,input_choice;
    node *tmp;

    root = NULL;
    do {
    	 printf("\n enter the data \n");
	     scanf("%d",&input_data);
	     insert(&root, input_data);
	     printf("Enter 1. for More insert \n Enter 2. for exit this loop\n");
         scanf("%d",&input_choice);		 
	} while(input_choice == 1);
	
    /* Printing nodes of tree */
    printf("Pre Order Display\n");
    print_preorder(root);

    printf("In Order Display\n");
    print_inorder(root);

    printf("Post Order Display\n");
    print_postorder(root);

//     Search node into tree 
	printf("\n Enter the data which you want to delete");
	scanf("%d",&input_data);
    search(&root, input_data);
  /*  if (tmp)
    {
        printf("Searched node=%d\n", tmp->data);
    }
    else
    {
        printf("Data Not found in tree.\n");
    }*/

    printf(" now der Display\n");
    print_inorder(root);
system("pause");
    printf(" now der Display\n");
    print_inorder(root);

 return 1;
}
