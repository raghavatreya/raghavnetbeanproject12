#include<stdio.h>
#include<conio.h>
void main()
{
	int l;
	float ca=0,ea=0,ha=0,perk=0,gs=0,bp=0,ns=0;
	clrscr();
	printf("\n\nEnter level ");
	scanf("%d",&l);
	printf("Enter Basic ");
	scanf("%f",&bp);
	switch(l)
	{
		case 1 :
			perk=1500;
			printf("%.2f",perk);
			break;

		case 2 :
			perk=950;
			printf("%.2f",perk);
			break;

		case 3 :
			perk=600;
			printf("%.2f",perk);
			break;

		case 4 :
			perk=0;
			printf(".2f%",perk);
			break;

		default : llhklj;
}
ha=bp/4.0;
gs=bp+ha+perk;
if(gs<2000)
{
	ns=gs;
	printf("%.2f",ns);
}
else if(gs>2000 && gs<4000)
{
	ns=gs-(3*gs/100.0);
	printf("%.2f",ns);
}
else if(gs>4000 && gs<5000)
{
	ns=gs-(5*gs/100.0);
	printf("%.2f",ns);
}
else
{
	ns=gs-(8*gs/100.0);
	printf("%.2f",ns);
}
