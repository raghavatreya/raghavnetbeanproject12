#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
/*string s1="happy";
s s2="diwalli",s3="\0";
conate(s3,s1);
conate(s3,s2);
cout<<s3;  */
clrscr();
int i,j=0,k=0;
char a[20];
char b[20];
char c[100]= "\0";
cout<<"enter first array\t";
cin>>a;
cout<<"enter second array\t";
cin>>b;
for(i=0;a[i]!='\0';i++)
j++;
cout<<"j->"<<j;
for(i=0;a[i]!='\0';i++)
k++;
cout<<"->"<<k;
int  g=j+k;
for(i=0;i<g;i++)
{
 if(i<=j)
 {
   c[i]=a[i];
 }
 else
 {
 cout<<"b[i-j] \n"<<b[g-j];
  c[i]=b[i-j];
 }
}
cout<<"answer is :\n"<<c;
getch();
}