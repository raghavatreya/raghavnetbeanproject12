#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	char another='Y';
	clrscr();
	struct emp
	{
		char name[40];
		int age;
		float bs;
	};
	struct emp e;

	fp=fopen("giriraj.txt","w");

	if(fp==NULL)
	{
		puts("Cannot Open File");
		exit(1);
	}

	while(another=='Y')
	{
		printf("\nEnter Name,age and basic salary : ");
		scanf("%s%d%f",e.name,&e.age,&e.bs);
		fprintf(fp,"%s%d%f\n",e.name,e.age,e.bs);

		printf("Add Another Record(Y/N)");
		fflush(stdin);
		another=getche();
	}
	fclose(fp);
	return 0;
}