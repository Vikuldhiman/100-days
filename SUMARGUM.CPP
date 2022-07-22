/* using function with argument and return value */
#include<iostream.h>
#include<conio.h>
int sum(int a, int b)
{
int sum;
sum=a+b;
return(sum) ;
}
int main()
{
int a,b,s;
cout<<"enter two number";
cin>>a>>b;
s=sum(a,b);
cout<<"sum ="<<s;
getch();
return 0;
}