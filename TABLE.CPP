/* print table of any number */
#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int a,b=1,c;
cout<<"enter the digit"<<endl;
cin>>a;
while (b<=10)
{
c=a*b;
cout<<a<<"*"<<b<<"="<<c<<endl;
b++;
}
getch();
return 0;
}
