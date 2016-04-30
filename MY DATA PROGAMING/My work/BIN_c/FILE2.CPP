#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
	FILE *fs,*ft;
	char ch;
	clrscr();
	fs=fopen("giriraj.txt","r");
	if(fs==NULL)
	{
		puts("Cannot Open Source File ");
		exit(1);
	}
	ft=fopen("raj.txt","w");
	if(ft==NULL)
	{
		puts("Cannot Open Target File ");
		fclose(fs);
		exit(2);
	}
	while(1)
	{
		ch=fgetc(fs);

		if(ch==EOF)
			break;
		else
			fputc(ch,ft);
	}
	fclose(fs);
	fclose(ft);
	return 0;
}
