#include <stdio.h>
#include <stdlib.h>
void insert();
int num=1;
void delete();
void disp();
int *pointer,*pointer1;
int j=0;

int main()
{
    pointer=(int *)malloc(sizeof(int));
    pointer1=(int *)malloc(sizeof(int));

    do {
        printf("\n1. Insert data of student\n2. Delete data of Student\n3. Display\n0.Exit");
        int ch;
        scanf("%d",&ch);
                if(ch==0)
            break;
        if (ch==1) {
            insert();
        }
        else if (ch==2)
        {
            delete();
        }
        else if (ch==3)
        {
            disp();
        }
       // printf("\n%d",pointer[2]);
       // printf("\n%d",pointer1[2]);
        
    } while (1);
    return 0;
}
void insert()
{
    int n;
    //int *temp;
    //int *temp1;
    printf("Of how many students do you want to enter data?\n");
    scanf("%d",&n);
    num=num+n;
    pointer=realloc(pointer, num*sizeof(int));
    pointer1=realloc(pointer1, num*sizeof(int));
    for(j=j;j<num-1;j++)
    {
        printf("\nEnter the roll no. of student\n");
        scanf("%d",&pointer[j]);
        printf("\nEnter the marks of this student\n");
        scanf("%d",&pointer1[j]);
        //printf("\n%d",j);
    }
    j=j;
    /*if(temp!=NULL)
    {
        pointer=temp;
        pointer1=temp1;
    }*/
   // printf("\n%d",pointer[2]);
   // printf("\n%d",pointer1[2]);
}
void delete()
{
    int k;
    printf("\nEnter the record which you want to delete\n");
    scanf("\n%d",&k);
    k=k-1;
    free(pointer);
    free(pointer1);
    
    
}
void disp()
{
    int k;
    printf("\nEnter the record which you want to display\n");
    scanf("%d",&k);
    k=k-1;
    printf("\n%d",pointer[k]);
    printf("\n%d",pointer1[k]);
    
}