#include<stdio.h>
int one(int ,int );
main()
{
    int a,b,c,h,s;
    printf("enter the value of a b c");
    scanf("%d%d%d",&a,&b,&c);
    h=one(a,b);
    s=one(c,h);






    printf("max number is %d",s);

}
int one(int x,int y)
{
    if(x>y)
    {
        return(x);
    }
    else
    {
        return(y);
    }
}
