/* input a number and output is a reverse of a given number */
#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int n,rem,rev=0;
cout<<"enter any number";
cin>>n;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n/=10;
}
cout<<"reverse = "<<rev;
getch();
return 0;
}
