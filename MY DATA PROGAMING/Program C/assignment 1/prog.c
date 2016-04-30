#include<stdio.h>
#include"string.h"
int main()
{
 char st[40]="NUll",st1[20]="NUll",st2[20]="NUll",ch;
 int opt,f,n;
 do{
 printf("\n 1.to find string length:");
 printf("\n 2.to concatenate two strings:");
 printf("\n 3.to find first occurence in a string:");
 printf("\n 4.to find last occurence in a string:");
 printf("\n 5.to retrieve index of substring from main:");
 printf("\n 6.to retrieve substring from main string:");
 printf("\n 7.to replace given substring from main string:");// problem
 printf("\n 8.to compare two strings:");
 printf("\n 9.to compare two strings without case sensitivity :");
 printf("\n 10.to reverse the given string:");
 printf("\n 11.to convert string to upper case:");
 printf("\n 12.to convert string to lower case:");
 printf("\n 13.to convert string to title case:");// problem
 printf("\n 14.to duplicate and concatenate the main string:");// problem
 printf("\n 15.to reverse and concatenate:");// problem
 printf("\n 16.to check whether string is palindrome or not:");
 printf("\n 17.to display and count vowels in string:");// problem
 printf("\n 18.to count characters and words:");
 printf("\n enter u r option:");
 scanf("%d",&opt);
 switch(opt)
    {

    case 1:
            fflush(stdin);
                printf("enter any string\n");
                gets(st);
                printf("\n Length of string is:%d",strilen(st));
            break;
    case 2:
        fflush(stdin);
        printf("\n enter first string:");
        gets(st1);
        printf("\n enter second string:");
        gets(st2);
        stricat(st1,st2);
        printf("\n string concatenation is:%s",st1);
        break;
    case 3:
        fflush(stdin);
        printf("enter any string:");
        gets(st);
        printf("\n enter any character:");
        scanf("%c",&ch);
        f=firocu(st,ch);
        printf("%d",f);
        break;
    case 4:
       fflush(stdin);
       printf("enter any string:");
       gets(st);
       printf("\n enter character:");
       scanf("%c",&ch);
       f=lastocu(st,ch);
       if(f==0)
       printf("\n not found");
       else
        printf("%d",f);
       break;
    case 5:
      fflush(stdin);
      printf("\n enter any string:");
      gets(st1);
      printf("\n enter substring:");
      gets(st2);
      f=striind(st1,st2);
      if(f==0)
        printf("sub string not found");
      else
      printf("\n index is:%d",f);
      break;
    case 6:
        fflush(stdin);
        printf("enter the main string:");
        gets(st1);
        fflush(stdin);
        printf("enter the position to retrieve:");
        scanf("%d",&f);
        printf("enter no. of characters in string:");
        scanf("%d",&n);
        printf("substring is:");
        substri(st1,f,n);
        break;
    case 7:
          fflush(stdin);
          printf("enter the main string:");
          gets(st1);fflush(stdin);
          printf("enter the index to replace:");
          scanf("%d",&n);
          fflush(stdin);

          printf("enter the substring:");
          gets(st2);fflush(stdin);
          strirep(st1,n,st2);
          break;
    case 8:
        fflush(stdin);
        printf("enter two strings: ");
        gets(st1);fflush(stdin);
        gets(st2);fflush(stdin);
        n=stricomp(st1,st2);
        if(n==0)
            printf("\n both strings are equal:");
            else
            printf("both are not equal:");
            break;
    case 9:
        fflush(stdin);
        printf("enter two strings:");
        gets(st1);fflush(stdin);
        gets(st2);fflush(stdin);
        n=stricom(st1,st2);
        if(n==0)
         printf("\n both strings are equal");
         else
            printf("\n both strings are not equal");
         break;
    case 10:
        fflush(stdin);
        printf("enter string to reverse:");
        gets(st);fflush(stdin);
        strirev(st);
        break;
    case 11:
        fflush(stdin);
        printf("enter a string:");
        gets(st);fflush(stdin);
        striupr(st);
        break;
    case 12:
        fflush(stdin);
        printf("enter a string:");
        gets(st);fflush(stdin);
        strilwr(st);
        break;
    case 13:
        fflush(stdin);
        printf("enter a string:");
        gets(st);fflush(stdin);
        title(st);
        break;
    case 14:
        fflush(stdin);
		//st1 = NULL;
        printf("enter a string:");
        gets(st1);fflush(stdin);
        dupcat(st1);
        printf("%s",st1);
        break;
    case 15:
        fflush(stdin);
        printf("\n enter a string:");
        gets(st);
        revcat(st);
        break;
    case 16:
        fflush(stdin);
        printf("enter a string:");
        gets(st);
        n=palin(st);
        if (n == 1)
       printf ("%s is a palindrome \n", st);
        else
       printf("%s is not a palindrome \n", st);

        break;
    case 17:
        fflush(stdin);
        printf("enter a string:");
        gets(st);
        printf("vowels are:");
        n=strvow(st);
        printf("\n number of vowels are:%d",n);
        break;
    case 18:
        fflush(stdin);
        printf("enter a string:");
        gets(st);
        chawor(st);
        break;
 }
} while(1);

 return 0;
   }

