#include<iostream.h>
#include<conio.h>
class iteam
{ int code;
   float price;
   public:
      void getdata(int a,float b)
      { code=a;
	price=b;
      }
      void show()
      { cout<<"\n\n\n CODE  :"<<code;
	cout<<"\n\n\n  PRICE :" <<price;
      }
};
const int size =3;
void main()
{ iteam *p=new iteam [3];
 iteam *d=new p;
  int x,i;
  float y;
  for(i=0;i<size;i++)
  { cout<<"\n\nINPUT CODE AND PRINCE iS \n\n";
     cin>>x>>y;
     p->getdata(x,y);
     p++;
  }
}