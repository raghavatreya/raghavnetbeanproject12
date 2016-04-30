#include<iostream.h>
#include<conio.h>
class student
{
protected:
int roll_number;
public:
	void get_number(int a)
	{ roll_number=a;
	}
	void put_number()
	{ cout<<" roll number"<<roll_number;
	}
};
class test :