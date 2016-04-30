#include <stdio.h>
main()
{
    char a;
    int b;
    printf("Enter a character of your choice :");
    a=getchar();
    printf("%d \n",a);
    gate:
    printf("To Enter another character,type A \n");
    scanf("%d",&b);
    if (b==65)
    {
        goto gate;
    }
}
