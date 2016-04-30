#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
void main(int argc, char *argv[])
{
	int i,s=0;
	clrscr();
	cout<<"\n\nTotal Passed Arguments Are : "<<argc;
	for(i=0;i<argc;i++)
		cout<<"\n\n"<<argv[i];
	for(i=0;i<argc;i++)
		s=s+atoi(argv[i]);
	cout<<"\n\nSum of All Arguments are : "<<s;t
}