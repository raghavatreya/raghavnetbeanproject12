#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
	FILE *fp;
	clrscr();
	struct emp
	{
		char name[40];
		int age;
		float bs;
	};
	struct emp e;
	fp=fopen("giriraj.txt","r");
	if(fp==NULL)
	{
		puts("Cannot Open File");
		exit(1);
	}
	while(fscanf(fp,"%s%d%f",e.name,&e.age,&e.bs)!=EOF)
		printf("%s%d%f\n",e.name,e.age,e.bs);
	fclose(fp);
	return 0;
}