#include<stdio.h>
main()
{
    char ch;
int i,l,m;
for(i=1;i<6;i++)
{
    if(i%2!=0)
    {
        for(m=1;m<=i;m++)
        printf("%d",(m+64));
    }
    if(i%2==0)
    {

     for(l=1;l<=i;l++)
        printf("%d",l);
    }
    printf("\n");
}
}

