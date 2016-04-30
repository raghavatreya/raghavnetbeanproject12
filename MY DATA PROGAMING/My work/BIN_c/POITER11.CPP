#include <stdio.h>
#include <conio.h>
void main()
{
	int a[5],i=0;
	int *p,j=0,k=0;
	clrscr();
	p=a;
	printf("\n\nEnter Array Elements : ");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(i=0;i<5;i++)
		printf("%d\t",*(p+i));
//	for(i=0;i<5;i++)
//	{
//		for(j=i+1;j<5;j++)
//		{
 //			k=*(p+i);
   //			*(p+i)=*(p+j);
     //			*(p+j)=k;
       //		}
//	}
  //	for(i=0;i<5;i++)
    //		printf("%d\t",*(p+i));
getch();
}
