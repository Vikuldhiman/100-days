/* enter a number and get fabonaccie series */
#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int a=0,b=1,n,c;
cout<<"enter the series";
cin>>n;
cout<<"the fabonaccie series is "<<endl;
for (int i=1; i<=n;i++)
{
cout<<a<<"  ";
c=a+b;
a=b;
b=c;
}
getch();
return 0;
}
