/* using argument with return value and using functiom */
#include<iostream.h>
#include<conio.h>
int max(int a,int b)
{
if(a>b)
   return(a);
else
   return(b);
}
int main()
{
int x,y,z;
cout<<"enter two numbers";
cin>>x>>y;
z=max(x,y);
cout<<"greater ="<<z;
getch();
return 0;
}