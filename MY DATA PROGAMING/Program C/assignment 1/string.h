int strilen(char st[20])
{

    int i=0;
    while(st[i]!='\0')
    {
        i++;
    }
    return i;
}

char stricat(char st1[20],char st2[20])
{
    int i=0,j;
    while(st1[i]!='\0')
    {
        i++;
    }

    for(j=0;st2[j]!='\0';j++)
    {

        st1[i]=st2[j];
        i++;
    }
    st1[i]='\0';
}

int firocu(char st[20],char ch)
{
    int i,n=0;

    for(i=0;st[i]!='\0';i++)
   {
       n++;
       if(st[i]==ch)
        break;
   }
       if(i==n)
        {printf("\n charcter not found");
        return -1;
       }
       else
        return i+1;
}

int lastocu(char st[20],char ch)
{

    int i,k;
    for(i=0;st[i]!='\0';i++)
    {
        k++;

    }
 for(i=k;i>=0;i--)
{
    if(st[i]==ch)
     break;
}
        return i+1;
 }
int striind(char st1[20],char st2[20])
{
   int i,k;
 for(i=0;st1[i]!='\0';i++)
 {
     if(st1[i]==st2[0])
     {
            for(k=0;st2[k]!='\0';k++)
            {

                if(st1[i+k]==st2[k])
                {
`                    if(st2[k+1]=='\0')
                        return  (i+1);
                }
            }

     }
 }
}
char substri(char st1[20],int f,int n)
{

    int i;
    for(i=f-1;i<f+n-1;i++)
   {

   printf("%c",st1[i]);

}
}
char strirep(char st1[40],int n,char st2[20])
{
    // i am replace the string  only giving the index that remove string from here
	int i,j;
   for(i=n-1,j=0;st2[j]!='\0' && st1[i]!='\0';i++,j++)
    {
	
        st1[i]=st2[j];
    }
    printf("replaced string is:%s",st1);
}
int stricomp(char st1[],char st2[])
{
    int i,k=1;
    for(i=0;st1[i]!='\0' && st2[i]!='\0';i++)
    {

        if(st1[i]!=st2[i])
        {
            k=0;
            break;
        }
    }
}
int stricom(char st1[],char st2[])
{
    int i,k=0;
    char ch1,ch2;
    for(i=0;st1[i]!='\0' && st2[i]!='\0';i++)
    {

        ch1=st1[i];
        ch2=st2[i];
        if(ch1>=65 && ch1<=90)
            ch1=ch1+32;
        if(ch2>=65 && ch2<=90)
            ch2=ch2+32;
       if(ch1!=ch2)
        break;

    }
    k=ch1-ch2;
    return k;
}
char strirev(char st[])
{

    int i,k=0;
    for(i=0;st[i]!='\0';i++)
    {
        k++;
    }
   printf("\nreverse string is:");

  for(i=k;i>=0;i--)
  {
          printf("%c",st[i]);
  }
}

char striupr(char st[])
{
   int i;
    for(i=0;st[i]!='\0';i++)
    {

        if(st[i]>=97 && st[i]<=122)
            st[i]=st[i]-32;

    }
    printf("upper case string is:%s",st);
}
char strilwr(char st1[])
{
   int i;
    printf("lower case string is:");
    for(i=0;st1[i]!='\0';i++)
    {

        if(st1[i]>=65 && st1[i]<=90)
            st1[i]=st1[i]+32;


   printf("%c",st1[i]);
}
}

char title(char st[])
{
    int i;
    for(i=0;st[i]!='\0';i++)
    {
        if(st[i]>=65 && st[i]<=90)
            st[i]=st[i]+32;    // converting the string in small case 
        if(st[0]>=97 && st[0]<=122)
            st[0]=st[0]-32; // first letter would be 
    }
    printf("title case is:%s",st);
}
char dupcat(char st1[])
{
    char t1[20];
    int i=0,k=0;
    while(st1[i]!='\0')
    {
        k++;
        i++;  // basically finding the length of string and setting a counter variable 
    }

    for(i=0;st1[i]!='\0';i++)
    {
        t1[i]=st1[i]; // 
    }
   i=0;
   while(t1[i]!='\0')
   {
       st1[k]=t1[i];
       k++;
       i++;
   }
}
void revcat(char st[])
{
    char t1[20];
   	int i=0,j=0,l=0;
	for(i=0;st[i]!='\0';i++)
	{
		j++; // finding the  length of string 
	}
	l=j;
	for(i=0;i<l;i++)
	{
		t1[i]=st[j-1-2*i];// reversse of string is in t1[] , indexing form "0"
		j++;
	}
	j=l;
	for(i=0;i<j;i++)
	{
		st[j+i]=t1[i]; // concatenation
	}
printf("reverse  concatenation gives:%s",st);
}

int palin(char st[])
{
   char t1[20];
   int i,j=0,flag=0,length=0;
  for (i = 0; st[i] != '\0'; i++)
    {
        length++; // here we are finding the length then
    }
     for (i = length - 1; i >= 0 ; i--)
    {
        t1[length - i - 1] = st[i]; // coping the string 
    }
     for (flag = 1, i = 0; i < length ; i++)
    {
        if (t1[i] != st[i])// flag will 1 
            flag = 0;
    }
    return flag;
}
int strvow(char st[])
{
    int n=0,i;
    for(i=0;st[i]!='\0';i++)
    {
        if(st[i]==65 || st[i]==69 || st[i]==75 || st[i]==79 || st[i]==85 ||st[i]==97||st[i]==101||st[i]==105||st[i]==111||st[i]==117)
         {

            n++;
         printf("%c",st[i]);
         }
    }

        return n;
}
void chawor(char st[])
{
    int nc=0,nw=1,i;// it will not count last word because the loop will ternicate and our logic is for counting space
    for(i=0;st[i]!='\0';i++)
    {
        nc++;
        if(st[i]==32 || st[i]=='\0')
         {
           nc--;
        nw++;
    }
    }
    printf("\n number of words:%d",nw);
    printf("\n number of characters:%d",nc);
}
