#include<stdio.h>

//Ans : 1
int stringLen(char s[])
{
    int i;
    for(i=0;s[i]!='\0';i++);
    return i;
}


//ANs...2concate
void stringcat(char a[],char b[])
{

    int j=0,i=0;

   while(a[i]!='\0'){
      i++;
  }
  a[i++]=' ';
  while(b[j]!='\0'){
      a[i++]=b[j++];
  }
    a[i]='\0';
}

//Ans : 3...find first index in given string from given char
int firstIndex(char s[],char a)
{
    int i;
    for(i=0;s[i]!=a && i<stringLen(s);i++);

    if(i<stringLen(s))
        return i+1;
    else
        printf("nNot Available");
        return 999;
}

//ANs....4

int lastIndex(char t[],char a)
{
	int i;

	for (i = 0; t[i] != '\0'; i++);

	for (i=i-1; i > 0;i--)
	{
		if (t[i] == a)
			break;
	}

	return i+1;
}
//Ans : 6 retrieve index of sub string..
int indexSubString(char s[],char t[])
{
    int i=stringLen(s);
    int j,k,y;
	int flag=0;
    for(j=0;j<i;j++)
    {
        if(s[j]==t[0])
        {
            flag=1;
            for(k=0,y=j;k<stringLen(t);y++,k++)
            {
                if(s[y]!=t[k])
                {
                    flag=0;
                }

                if(flag==1)
                    return j+1;

            }
        }
    }

    if(flag==0)
        return 0;

}



//Ans : 8...Comparision of string
int compare(char a[],char b[])
{
	int p=0,i;
    if(stringLen(a)==stringLen(b))
    {
    for(i=0;a[i]!='\0' && b[i]!='\0';i++)
	{	
		if(a[i]==b[i])
		p++;
	}
if(p==i)
return 1;
else
return 0;
}
else 
return 0;
}


//Ans : 9...Comparision of string without case sensitivity
int stringcmpwcs(char s[],char t[])
{
    int k=2;
	int j = stringLen(s)>stringLen(t) ? stringLen(t) : stringLen(t);
	for (int i = 0; i<j; i++)
    {
        if(s[i]>t[i])
        {
            if(s[i]-32!=t[i])
            k=1;
        }

        if(s[i]<t[i])
        {
            if(s[i]!=t[i]-32)
            k=-1;
        }

        if(s[i]-32 ==t[i] || s[i]==t[i]-32 ||s[i]==t[i])
            k=0;

        if(k!=2)
            break;
    }

    return k;
}


void stringcpy(char a[],char c[])
{
    int i=stringLen(a);

    for(int j=0;j<i;j++)
        c[j]=a[j];
}

//Ans 10 ::...Reverse of a given string...
void reverseString(char str[])
{
    char temp;
    int i=0;
    int j=stringLen(str)-1;
    while(i<j)
     {
     temp=str[i];
     str[i]=str[j];
     str[j]=temp;
     i++;
     j--;
     }
}

//Ans. 11
void upperString(char s[])
{
    int i=stringLen(s);
    for(;i>=0;i--)
    {
        if(s[i]>='a' && s[i]<='z')
            s[i]=s[i]-32;
    }
}


//Ans .:: 12
void lowerString(char s[])
{
    int i=stringLen(s);
    for(;i>=0;i--)
    {
        if(s[i]>='A' && s[i]<='Z')
            s[i]=s[i]+32;
    }
}
//ANs 14

void dupliConcate(char s[])
{
	int i,j;

	for (i = 0; s[i] != '\0';i++);

	s[i] = ' ';
	for (j = 0; j < i ; j++)
	{
		s[i + j+1] = s[j];
	}

	s[i+j+1] = '\0';

}

void reverseConcate(char s[])
{
	int i,j;

	for (i = 0; s[i] != '\0';i++);

	s[i] = ' ';
	for (j = i; j>0 ; j--)
	{
		s[i++] = s[j];
	}

	s[++i] = '\0';

}


//Ans. 13
void titlecase(char s[])
{
    int i=stringLen(s);
    do
    {
        if(i==0 || s[i-1]==' ')
        {
            if(s[i]>='a' && s[i]<='z')
                s[i]=s[i]-32;
        }
        i--;
    }while(s[i]!='\0');
}
//Ans. ::16 ..palindrome or not ?

int ifPalindrome(char s[])
{
    int i,j=0,k=1;
    i=stringLen(s)-1;
    while(i>=0)
    {
        if(s[j]!=s[i])
           k=0;
        j++;
        i--;
    }
    return k;

}

int vovels(char s[])
{
    int i=stringLen(s);
    int k=0;

    for(int j=0;j<i;j++)
    {
        if(s[j]=='a' || s[j]=='e' || s[j]=='i'|| s[j]=='o'|| s[j]=='u' ||
           s[j]=='A' || s[j]=='E' || s[j]=='I'|| s[j]=='O'|| s[j]=='U' )
        {
            printf(" \n........vovel : %d : %c ",k+1,s[j]);
                k++;
        }
    }
    return k;

}

//Ans.::18 ....count word and words...................
void  countWordsCharacters(char s[])
{
    int i=stringLen(s);
    int c=0;
    int w=1;
    for(int j=0;j<i;j++)
    {
        if(s[j]!=' ' || (s[j]>58 && s[j]<122))
            c++;

        if(s[j]==' ')
            w++;
    }

    printf("\n.......Total characters : %d",c);
    printf("\n.......Total words      : %d",w);

}

void subsstring(char s[] , int i ,char d[])
{
	for(i;s[i]!='\0';i++)
	{
		d[i]=s[i];
	}
}
int substringindex(char a[], char b[])
{
	int len=stringLen(a);
	int sublen=stringLen(b);
	char st=b[0];
	int k=0;
	int i;
	while(k<=len-sublen)
	{
		if(a[k]==st)
		{
			for(i=1;i<sublen;i++)
			{
				if(b[i]!=a[k+i])
				break;
			}if(i==sublen){
				return k;
			}
		}
		
		k=k+1;
	}
	return 0;
} 

char* substringre(char a[],char b[],char d[])
{
	int index=substringindex(a,b);
	printf("\n%d",index);
	int sublen=stringLen(d);
	printf("\n%d",sublen);
	int k=0;
	for(k=0;k<sublen;k++)
	{a[index+k]=d[k];
		//printf("\n%c",a[index+k]=d[k]);
	}
	return a;
}
