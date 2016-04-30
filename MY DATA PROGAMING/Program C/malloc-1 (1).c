#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/time.h>
#include<stdlib.h>

void insert();
int num=1;
void delete();
void disp();
int *p,*p1;
int j=0;

int main()
{
    p=(int *)malloc(sizeof(int));
    p1=(int *)malloc(sizeof(int));

    do {
        printf("\n1. Insert data of student"); 
		printf("\n2. Delete data of Student ");
		printf("\n3. Display");
		printf("\n4.Exit \n");
        int ch;
        scanf("%d",&ch);
                if(ch==4)
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
        else
        {
        	printf(" \nEnter the sutable number \n");
        }
        
    } while (1);
    return 0;
}
void insert()
{
    int n;
    printf("\n Of how many students do you want to enter data?\n");
    scanf("%d",&n);
    num=num+n;
    p=realloc(p, num*sizeof(int));
    p1=realloc(p1, num*sizeof(int));
    for(j=j;j<num-1;j++)
    {
        printf("\nEnter the roll no. of student\n");
        scanf("%d",&p[j]);
        printf("\nEnter the marks of this student\n");
        scanf("%d",&p1[j]);
    }
    j=j;
}
void delete()
{
    int k;
    printf("\nEnter the record which you want to delete\n");
    scanf("%d",&k);
    k=k-1;
    p[k]=0;
    p1[k]=0;
}
void disp()
{
    int k;
    printf("\nEnter the record which you want to display\n");
    scanf("%d",&k);
    k=k-1;
    printf("\n the roll no. of student %d",p[k]);
    printf("\n the marks of this student %d",p1[k]);
    
}
