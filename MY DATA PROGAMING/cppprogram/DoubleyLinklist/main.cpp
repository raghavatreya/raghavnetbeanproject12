#include <iostream>
#include <string.h>
#include<stdlib.h>

using namespace std;

class doubllinklist{
struct node{
       int data;
       struct node *prev,*next;
       }*head;
       int countdata;
   public:
    doubllinklist()
    {
        countdata=0;
        head=NULL;
    }
    struct node*  insertdata()
    {   ++countdata;
        if(!head)
        {
            head=(struct node*)malloc(sizeof(struct node*));
            cout<<"Enter Data"<<endl;
            cin>>head->data;
            head->next=head->prev=NULL;
        }
        else
            {
                int i;
                struct node* temp,* temp1;
                temp = (struct node*)malloc(sizeof(struct node*));
                temp1 = (struct node*)malloc(sizeof(struct node*));
                cout<<"\n Enter Position"<<endl;
                cin>>i;
                if(i==1)
                {
                    cout<<"\n Enter Data"<<endl;
                    cin>>temp->data;
                    temp->prev=NULL;
                    temp->next=head;
                    head->prev=temp;
                    head=temp;
                }
                else
                {
                    int j=countdata-1;
                    cout<<endl<<"Total Value in list till now "<<j<<endl;
                    temp1=head;
                  //  cout<<endl<<"in inserdata in else statement"<<endl;
                        for(;j>0 && i>1;--i,--j)
                        {
                                cout<<endl<<"for loop in statement "<<endl<<temp1->data<<endl;
                                temp1=temp1->next;

                        }
                         cout<<"\n Enter Data"<<endl;
                         cin>>temp->data;
                         temp->prev=NULL;
                         temp->next=NULL;


                         if(i==1)
                         {
                            // temp1=temp1->prev;
                             temp->prev=temp1;
                             temp->next=temp1->next;
                             (temp1->next)->prev=temp;
                             temp1->next=temp;
                         }
                         else
                            {
                                cout<<endl<<"inside j statement"<<endl;
                                temp1->next=temp;
                                temp->prev=temp1;
                            }
}

                }
                return head;
            }

    void printdata(void **head)
    {
        struct node *temp1;
        temp1=(struct node*)malloc(sizeof(struct node *));
        temp1=*head;
        while(temp1)
        {
            cout<<endl<<temp1->data;
            temp1=temp1->next;
        }
    }
    void deletedata()
    {

    }

};
int main()
{
doubllinklist A1,A2,A3;
int i=1;
void *p;
p=(void *)malloc(sizeof(void *));
while(i==1)
{
 A1.insertdata();
    cout<<endl<<"value are";
    A1.printdata(p);
    cout<<"\nEnter 1. for insertdata "<<endl;
    cin>>i;
}

    cout << "Hello world!" << endl;
    return 0;
}
