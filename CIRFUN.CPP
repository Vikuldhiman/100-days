/* area of circle with using function */
#include<iostream.h>
#include<conio.h>
void circlearea()
{
int r;
float c=3.14,area;
cout<<"enter the radius";
cin>>r;
area=r*r*c;
cout<<"area of circle "<<area;
}
int main()
{
clrscr();
circlearea();
getch();
return 0;
}