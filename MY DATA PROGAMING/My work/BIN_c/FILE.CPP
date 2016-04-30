#include <stdio.h>
#include <conio.h>
void main()
{
	FILE *p;
	char c;
	clrscr();
	p = fopen("giriraj.txt","r");
	if(p==NULL)
		printf("\n\nFile Not Found");
	else
	{
		while(1)
		{
			c = fgetc(p);
			if(c==EOF)
				break;
			printf("%c",c);
		}
	}
	fclose(p);
}