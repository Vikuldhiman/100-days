/* input a number and get a series of sum */
#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int i,n;
float sum=0;
cout<<"enter the number";
cin>>n;
for (i=1;i<=n;i++)
{
sum=sum+i;
}
cout<<"sum="<<sum;
getch();
return 0;
}