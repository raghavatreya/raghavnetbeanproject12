#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/time.h>
#include<stdlib.h>

struct STUDENT
{
	int DAY,YEAR,MONTH;
	char NAME[100],ADDRESS[200],ADMISSION[10];
	struct MARKS
	{
		int internal,midsemester,endsemester;
	}RAGHAV;
};

int main()
{
	struct STUDENT A[6];
    int i,a,d=2;
   printf("\n First Enter The Details For 2 Student \n");
   printf(" \n the size fo operater %d \n ",sizeof(A[0]));
	for(i=0;i<2;i++)
    {
      printf("\n----------Enter DETAILS OF STUDENT No. %d ----------\n",(i+1)); 
	  printf(" \n Enter the name of student \t");
	  scanf("%s",&A[i].NAME);fflush(stdin);
	  printf(" \n Enter student ADDRESS\t");
	  scanf("%s",&A[i].ADDRESS);fflush(stdin);
	  printf(" \n Enter Admission no of student\t");
	  scanf("%s",&A[i].ADMISSION);fflush(stdin);
	  printf("\n Enter the DAY student number\t");
	  scanf("%d",&A[i].DAY);fflush(stdin);
	  printf("\n Enter the  YEAR student number \t");
	  scanf("%d",&A[i].YEAR);fflush(stdin);
	  printf("\n Enter the  MONTH student number \t");
	  scanf("%d",&A[i].MONTH);fflush(stdin);
	}
    /* if you want to take a string as a input you can so so as using a "%s"// gets()//puts() function  
	gets(A[1].ADMISSION);
    puts(A[1].ADMISSION);	*/	
	do
	{
		printf(" Enter 1.:- INSERT STUDENT INFORMATION\n");
		printf("Enter 2.:- MODIFY STUDENT INFORMATION\n");
		printf("Enter 3.:- DISPLAY    STUDENT INFORMATION\n");
        printf("Enter 4.:- for EXIT \n");  
		scanf("%d",&a);fflush(stdin);
		 switch(a)
		 {  // the code is not working with using function
		 	case 1: //insert();
		 			 	       i=d;d=d+1;
						     printf("\n----------Enter DETAILS OF STUDENT No. %d ----------\n",i); 
	  						 printf(" \n Enter the name of student \t");
	  						 scanf("%s",&A[i].NAME);fflush(stdin);
	 						 printf(" \n Enter student ADDRESS\t");
	 						 scanf("%s",&A[i].ADDRESS);fflush(stdin);
	 						 printf(" \n Enter Admission no of student\t");
	  						 scanf("%s",&A[i].ADMISSION);fflush(stdin);
	                         printf("\n Enter the DAY student number\t");
	                         scanf("%d",&A[i].DAY);fflush(stdin);
	                         printf("\n Enter the  YEAR student number \t");
	                         scanf("%d",&A[i].YEAR);fflush(stdin);
	                         printf("\n Enter the  MONTH student number \t");
	                         scanf("%d",&A[i].MONTH);fflush(stdin);
					 break;
		 	case 2:       // MODIFICATION OF PROGRAM
			              printf("\n Enter the index \n");
		 	 		      scanf("%d",&i);fflush(stdin);
			              printf(" \n Enter the name of student \t");
	  					  scanf("%s",&A[i].NAME);fflush(stdin);
                    	  printf(" \n Enter student ADDRESS\t");
	  					  scanf("%s",&A[i].ADDRESS);fflush(stdin);
	                      printf(" \n Enter Admission no of student\t");
	                      scanf("%s",&A[i].ADMISSION);fflush(stdin);
	                      printf("\n Enter the DAY student number\t");
	                      scanf("%d",&A[i].DAY);fflush(stdin);
	                       printf("\n Enter the  YEAR student number \t");
	                      nf(sca"%d",&A[i].YEAR);fflush(stdin);
	                       ntfpri("\n Enter the  MONTH student number \t");
	                      scanf("%d",&A[i].MONTH);fflush(stdin);

					//modify(i);
		 			break;
		 	case 3: //display(global);
		 				for(i=0;i<d;i++)
    					{
    						printf("\n----------Enter DETAILS OF STUDENT No. %d ----------\n",i); 
							   printf(" \n NAME OF STUDENT--%s---",A[i].NAME);
        					   printf(" \n STUDENT ADDRESS---%s--",A[i].ADDRESS);
                               	printf(" \n STUDENT ADMISSION MUNMBER---%s--",A[i].ADMISSION);
    	                        printf(" \n  STUDENT YEAR ---%d--",A[i].YEAR);
		                        printf(" \n STUDENT DAY---%d--",A[i].DAY);
		                        printf(" \n STUDENT MONTH--%d---",A[i].MONTH);
                        }
			         break;
			case 4: exit(1);
			         break;
			default :printf("\n Enter the write choice \n");		 		
		 }
	}
	while(1);
	printf("\n The Answer of 2 part 3 question \n ");
	
	for(i=0;i<2;i++)
	{
		printf("\n Enter Marks  Of Internal Exam \t");
		scanf("%d",&A[i].RAGHAV.internal);fflush(stdin);
	  printf("\n Enter Marks Of Midsemester Exam\t");
	  scanf("%d",&A[i].RAGHAV.midsemester);fflush(stdin);
	  printf("\n Enter Marks Of Endsemester \t");
      scanf("%d",&A[i].RAGHAV.endsemester);
	}
	
	for(i=0;i<2;i++)
	{
		printf("\n the Marks OBTAIB BY STUDENT NO %d Of Internal Exam %d \n",i,A[i].RAGHAV.internal);
		printf("\nMarks OBTAIB BY STUDENT NO %d Of Midsemester Exam %d \n",i,A[i].RAGHAV.midsemester);
		printf("\nMarks OBTAIB BY STUDENT NO %d Of Endsemester %d \n",i,A[i].RAGHAV.endsemester);
	}
	getch();
	return 0;

}


