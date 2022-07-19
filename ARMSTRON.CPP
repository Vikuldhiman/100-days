/* enter a number and chech the number is armstrong is not */
#include<conio.h>
#include<iostream.h>
int main()
{
clrscr();
int n,rem,sum=0;
cout<<"enter a number"<<endl;
cin>>n;
int temp=n;
while(n>0)
{
rem=n%10;
sum=sum+rem*rem*rem;
n=n/10;
}
if(sum==temp) {
cout<<temp<<" number is armstrong"; }
else {
cout<<temp<<" number is not armstrong"; }
getch();
return 0;
}
