/* enter numbers and select choice (+,-,*,/) and take output */ 
#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int a,b;
int n;
cout<<"enter the two numbers"<<endl;
cin>>a>>b;
cout<<" YOUR CHOICES \n 1.add  \n 2.sub  \n 3.mul  \n 4.div "<<endl;
cin>>n;
switch (n)
{
case 1:
     cout<<"sum = "<<a+b;
     break;
case 2:
     cout<<"sub = "<<a-b;
     break;
case 3:
     cout<<"mul = "<<a*b;
     break;
case 4:
     cout<<"div = "<<a/b;
     break;
default :
     cout<<"unwalid choice";
}
getch();
return 0;
}
