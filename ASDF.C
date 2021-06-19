#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};
struct node *first=NULL;
int c=0,b=0,y=0,j=0;
void vote_for()
{
struct node *p;
int ele;
p=(struct node*)malloc(sizeof(struct node));
printf("1.bjp\n2.ysr\n3.jsp\n");
printf("enter party name\n");
scanf("%d",&ele);
if(ele==1)
{
b++;
c++;
}
else if(ele==2)
{
y++;
c++;
}
else if(ele==3)
{
j++;
c++;
}
else
{
printf("wrong vote\n");
}
p->data=ele;
p->link=first;
first=p;
printf("total no ofvotes casted:%d\n",c);
}
void display()
{
struct node *temp;
if(first==NULL)
{
printf("no voter list\n");
}
else
{
temp=first;
   while(temp!=NULL)
   {
      printf("\t%d\n",temp->data);
      temp=temp->link;
   }
}
}
void winner()
{
if(b>y&&b>j)
{
printf("winner is BJP\n");
}
else if(y>j)
{
printf("WINNER IS YSR\n");
}
else
{
printf("JSP IS WINNER\n");
}
printf("thank you\n");
}

void main()
{
unsigned c;
int age,i,b,ch,z;
char name;
clrscr();
printf("\nenter your birth year:");
scanf("%d",&b);
age=2019-b;
printf("\nyour age is:%d\n",age);
if(age>=18)
{
printf("\nyou can caste your vote\n");


}
else
{
printf("under age\n");
}

while(age>=18)
{
printf("enter name\t:");
scanf("%s",&name);
c=random(z)*random(z+500)*random(z+1000);
z=z+100;
printf("YOUR VOTER ID IS %u\n",c);
printf("1.vote by \n2.display\n3.winner\n4.exit\n");
printf("enter choice");

scanf("%d",&ch);
  switch(ch)
   {
    case 1:
	     vote_for();
	     break;
    case 2:display();
	    break;
    case 4: exit(0);
	      break;
	      case 3:winner();
		     break;
    default: printf("error\n");

    }
  }
  getch();
  }
