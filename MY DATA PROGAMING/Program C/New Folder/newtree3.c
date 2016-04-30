#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct s
{
	int data;
	struct s *left;
	struct s *right;
}*tree;

tree *root=NULL;

void insert(tree **subroot,int data)
{
	if (*subroot==NULL)
	{
		tree *newNode;
		newNode=(tree *)malloc(sizeof(tree));
		newNode->data=data;
		newNode->left=NULL;;
		newNode->right=NULL;

		*subroot=newNode;

		return;
	}

	if (data <= (*subroot)->data)
	{
		insert(&(*subroot)->left,data);
	}
	else
	{
		insert(&(*subroot)->right,data);
	}

}

int showMenu()
{
	printf("1. Insert\n");
	printf("2. Display - Inorder\n");
	printf("3. Display - Preorder\n");
	printf("4. Display - Postorder\n");
    printf("5. Search\n");
    printf("6. Delete_node\n");

	int select;
	printf("Select option :");
	scanf("%d",&select);

	return select;
}

void inorder(tree *c)
{
	if(c==NULL)
		return;

	inorder(c->left);
	printf("%d\n",c->data);
	inorder(c->right);
}

void preorder(tree *c)
{
	if (c==NULL)
		return;

	printf("%d\n",c->data);
	preorder(c->left);
	preorder(c->right);
}

void postorder(tree *c)
{
	if(c==NULL)
		return;
	postorder(c->left);
	postorder(c->right);
	printf("%d\n",c->data);
}

int search(tree *c,int skey)
{
    if(c==NULL)
        return 0;
    else if(c->data==skey)
        return 1;
    else if(skey<(c->data))
        search(c->left,skey);
    else
        search(c->right,skey);
}

void delete_node(tree *c,int skey)
{
    tree *p,*p1,*c1;
    char d;
     p=c;

     if(root->left==NULL  &&  root->right==NULL)
         root=NULL;                                   


    while(c!=NULL)
    {

        if(skey==(c->data))
            break;
        else if(skey<(c->data))
            {
                p=c;
                c=c->left;
                d='l';
            }
        else
            {
                p=c;
                c=c->right;
                d='r';
            }
    }

    if(c->left==NULL && c->right==NULL)
    {
        if(d=='l')
            p->left=NULL;
        else
            p->right=NULL;
    }

    else if(c->left==NULL && c->right!=NULL)
    {
        if(d=='r')
            p->left=c->right;
        else
            p->right=c->right;
    }

    else if(c->left!=NULL && c->right==NULL)
    {
        if(d=='r')
            p->left=c->left;
        else
            p->right=c->left;
    }

    else
    {
        p1=c->right;
        c1=p1->left;

        
        
        while(c1->left!=NULL )
        {
            p1=c1;
            c1=c1->left;
        }

        c->data=c1->data;
        p1->left=c1->right;
    }

}

int main(int argc, char const *argv[])
{

	int select=1,data,skey;

	while(1)
	{
		system("cls");
		select=showMenu();
		switch(select)
		{
			case 1:
				printf("Enter the data : ");
				scanf("%d",&data);
				insert(&root,data);
				break;
			case 2:
				inorder(root);
				system("pause");
				break;
			case 3:
				preorder(root);
				system("pause");
				break;
			case 4:
				postorder(root);
				system("pause");
				break;
            case 5:
                printf("\nEnter search key :");
                scanf("%d",&skey);
                if(search(root,skey))    //  ==1
                    printf("\nSearch key found\n");
                else
                    printf("\nSearch key not found");
                system("pause");
                break;

            case 6:
                printf("Enter data to delete : ");
                scanf("%d",&skey);
                delete_node(root,skey);
                break;
			default:
				printf("Invalid Selection");
				break;
		}
	}

	return 0;
}
