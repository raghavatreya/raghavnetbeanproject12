#include<iostream.h>
#include<conio.h>
class sample
{
	    int a,b;
	    public:
	    void setvalue()
	    {
		a=40;
		b=40;
	    }
	    friend float mean(sample s);
};
float mean(sample s)
{
	return(s.a+s.b)/2.0;
}
int main()
{       clrscr();
	sample u;
	u.setvalue();
	cout<<"Mean value = "<<mean(u)<<"\n";
	return 0;
	getch();
}
