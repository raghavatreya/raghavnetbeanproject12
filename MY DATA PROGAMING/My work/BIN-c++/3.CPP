#include<iostream.h>
#include<conio.h>
class arr
{
   int a[5];
   public:
   arr (int *s)
   { int i;
     for(i=0;i<5;i++)
     { a[i]=s[i];
     }
   }
   int operator [] (int k)
   { return a[k];
   }
};
void main()
{
int x[5]={1,2,3,4,5};
arr A(x);
int i;
for(i=0;i<5;i++)
{
cout<<x[i];
}
}