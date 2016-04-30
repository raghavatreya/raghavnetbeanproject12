#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	FILE *fs,*ft;
	int ch;

	fs=fopen("giriraj.txt","rb");
	if(fs==NULL)
	{
		puts("Cannot Open Source file");
		exit(1);
	}
	ft=fopen("raju.txt","wb");
	if(ft==NULL)
	{
		puts("Cannot Open Target File");
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