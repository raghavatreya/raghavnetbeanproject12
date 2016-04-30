#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include "stringassing.h"
int main()
{
	int i,u;char t; char A[100],B[100],C[200];
	printf("Enter first String \n");
	gets(A);
	printf("Enter Second String \n");
	gets(B);
while(1)
{
	 //clrscr();
	printf("--------------------:select a choice:----------------- \n");
	printf("Enter 1. for Find the length of the string \n");
	printf("Enter 2. for Concatenation of two different strings \n ");
	printf("Enter 3. for Retrieve the first index/position/occurrence of given \n \t\tsymbol in the string \n");
	printf("Enter 4. for Retrieve the last occurrence of given symbol in the string\n");
	printf("Enter 5. for Retrieve the index of the substring in the main string \n");
	printf("Enter 6. for Retrieve the substring from the main string \n");
	printf("Enter 7. for Replace the given substring in the main string \n \t\t from the given position \n");
	printf("Enter 8. for Compare Strings \n");
	printf("Enter 9. for Compare Strings without case sensitivity \n");
	printf("Enter 10. Reverse of the given string \n");
	printf("Enter 11. for Convert the string to upper case \n");
	printf("Enter 12. Convert the string to lower case \n");
	printf("Enter 13. Convert the string to Title Case \n");
	printf("Enter 14. Duplicate and concate the main string \n");
	printf("Enter 15. Concatenate the reversal of string at the end  \n");
	printf("Enter 16. Check the given string is palindrome or not (using loop)\n");
	printf("Enter 17. Display and count the vowels present in the string \n");
	printf("Enter 18. Count the characters and words \n");  
	printf("Enter 19. for EXIT \n");          

	scanf("%d",&u);
	
	switch(u)
	{
		case 1: 
				printf("  Enter the  first string:- \n "); 
				gets(A);
		        i=stringLen(A);
		        printf(" The lenght of  Stirng A is %d \n ",i);
 				break;
		case 2: 
				printf("  Enter the  string:- \n "); 
	       		gets(A);
				printf("Enter the another string :-\n");
				gets(B);	    		
				stringcat(A,B);
	    		printf(" \n The concatetaion of two string is \n");
    			puts(A);
				break;
		case 3: 
				  printf("  Enter the  string:- \n "); 
				  gets(A);
  				  printf(" Enter the charcter whose first occurenece:-> \n ");
		 		  scanf("%c",&t);
		  		  i=firstIndex(A,t);
		          printf("  The index of char is %d \n ",i);
				break;
		case 4: 
				    printf(" \n Enter the  string:- \n "); 
		            gets(A);
					printf("\n Enter the charcter whose last occurenece  you want to find :-> \n ");
					scanf("%c",&t);
					i=lastIndex(A,t);
					printf("\n The index of char is %d \n ",i);
				    break;
		case 5: 
				    printf("  Enter the  string:- \n "); 
				    gets(A);
        		    printf("  Enter second string :-  \n");
         		    gets(C);
         		    i=indexSubString(A,C);
         			printf(" \n The  index of sub String is = %d",i);
				break;
		case 6: 
					printf(" \n Enter the  string:- \n "); 
		     		gets(A);
             		printf(" \n Enter index :-> \n");
             		scanf("%d",&i);
             		subsstring(A,i,C);
        	 		printf(" \n The First Stirng is  \n ");puts(A);
 			 		printf(" \n The NEW Second Stirng is %d \n ");puts(C);
				break;
		case 7: 
				   printf(" \n Enter the  string:- \n "); 
		           gets(A);
		           printf(" \n Enter the new string \n "); 
		           gets(C);
		           printf(" \n Enter the  substring \n "); 
		           gets(B);
		           substringre(A,B,C);
		           printf("Answer is:-\n \t");
				   puts(A);
				break;
		case 8: 
				 printf(" \n Enter the  string:- \n "); 
	    		 gets(A);
  		         i=compare(A,B);
  		         if(i)
  		         printf(" \n string are equal \n ");
  	 	         else
  		        printf(" \n string are not equal \n ");
				break;
		case 9: 
				printf("  Enter the  string:- \n "); 
  				gets(A);
  				printf("Comparison without casesesitivity\n");
  				i=stringcmpwcs(A,B);
 				if(i) //a little doubt
 				printf("  string are equal \n ");
  				else
  				printf("  string are not equal \n ");
				break;
		case 10:
					 printf(" \n Enter the  string:- \n "); 
		 			 gets(A);
                     printf("\n reverseing the String \n");
                     reverseString(A);
                     puts(A);
				     break;
		case 11:
				   printf(" \n Enter the  string:- \n "); 
				   gets(A);
                   printf("\n New String into uppercase Answer is :- \n");
                   upperString(A);
         		   puts(A);

				break;
		case 12:
				 printf(" \n Enter the  string:- \n "); 
		         gets(A);
                 printf("\n New String into lowercase  Answer is:- \n");
                 lowerString(A);
                 puts(A);
				
				break;
		case 13:
				printf(" \n Enter the  string:- \n "); 
				gets(A);
                printf("\n converting String into Title case\n");
                titlecase(A);printf("Answer is:-\n \t");
                puts(A);
				break;
		case 14:
				 printf(" \n Enter the  string:- \n "); 
				 gets(A); 
         		 printf("\n you want to duplicate the String \n");// concate
         		 dupliConcate(A);
         		 puts(A);

				break;
		case 15:
				    printf(" \n Enter the  string:- \n "); 
					gets(A);
	     			printf("\n reverseing  and concating the String \n");
	     			reverseConcate(A);
         			puts(A);
				break;
		case 16:
				 printf(" \n Enter the string:- \n "); 
  				 gets(A);
				i=ifPalindrome(A);
   				if(i)
   				printf("\n The given String is pailndrum\n");
   				else
   				printf("\n The given String is not pailndrum\n"); 
				break;
		case 17:
				 printf("  Enter the  string:- \n "); 
		     	 gets(A);
 			     i=vovels(A);
 			     printf(" the  number of vowel in a string A is %d \n",i);
				break;
		case 18:
				  printf("  Enter the  string:- \n "); 
		          gets(A);
                  printf(" The counting of word and character in string A \n");
                  countWordsCharacters(A);
				  break;
		case 19:
				 exit(0);
				 break;
	    default:printf("Enter the suitable number\n");
	    	   
	}
}
/* 
  printf("\n string copy  A to C\n ");
  stringcpy(A,C);//there is an problem in string 
  printf(" \n the first string is :->");
  puts(A);
  printf("\n copied string :-> ");
  puts(C);
	
 		printf(" \n Enter the second string:- \n "); 
		 gets(A);
    	i=stringLen(B);
		printf("\n The lenght of Second Stirng is %d \n ",i);
*/
	getch();
	return 0;

}
