#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
struct library
{
	int an,p;
	char tb[15],a[15];
};
void main()
{
	struct library l[100];
	int i,t,k=0,j=0;
	int cnt=0,ch;
	char b[15];
	clrscr();
	while(1)
	{
		printf("\n\n ******** MINI Library System ********");
		printf("\n\n1. ADD BOOK");
		printf("\n\n2. SHOW ALL BOOK IN LIBRARY");
		printf("\n\n3. LIST ALL BOOKS OF GIVEN AUTHOR");
		printf("\n\n4. LIST THE TITLE OF SPECIFIED BOOK");
		printf("\n\n5. COUNT ALL BOOK IN THE LIBRARY");
		printf("\n\n6. LIST ALL THE BOOKS IN THE ORDER OF ASC. NO");
		printf("\n\n7. EXIT");
		printf("\n\nCHOOSE OPTION : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 :
				 printf("\n\nEnter Book No. : ");
				 scanf("%d",&l[cnt].an);
				 printf("\n\nEnter Book Title : ");
				 scanf("%s",&l[cnt].tb);
				 printf("\n\nEnter Author Name : ");
				 scanf("%s",&l[cnt].a);
				 printf("\n\nEnter Price Of Book : ");
				 scanf("%d",&l[cnt].p);
				 cnt++;
				 break;

			case 2 :
				 for(i=0;i<cnt;i++)
					printf("\n\n%s",l[i].tb);
				 break;
			case 3 :
				 printf("\n\nEnter Author Name : ");
				 scanf("%s",&b);
				 for(i=0;i<cnt;i++)
				 {
					if(strcmp(b,l[i].a)==0)
					{
						printf("\n\n%s",l[i].tb);
					}
				 }
				 break;
			case 4 :
				 printf("\n\nEnter Book No. : ");
				 scanf("%d",&t);
				 for(i=0;i<cnt;i++)
				 {
					if(t==l[i].an)
						printf("\n\nBOOK NAME  : %s",l[i].tb);
				 }
				 break;
			case 5 :
				 printf("%d",cnt);
				 break;
			case 6 :
				 for(i=0;i<cnt;i++)
				 {
					for(j=i+1;j<cnt;j++)
					{
						if(l[i].an>l[j].an)
						{
							k=l[i].an;
							l[i].an=l[j].an;
							l[j].an=k;
						}
					}
				 }
				 for(i=0;i<cnt;i++)
				 printf("\n\n%s",l[i].tb);
				 break;
			case 7 : exit(1);break;
		}
	}
}