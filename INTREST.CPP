/* this program for find profit or loss */
#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int cp,sp;
cout<<"enter the amount of simple interest"<<endl;
cin>>sp;
cout<<"enter the amount of compund intrest"<<endl;
cin>>cp;
if (sp>cp) {
cout<<"profit ="<<sp-cp<<endl; }
else {
cout<<" loss ="<<cp-sp<<endl; }
getch();
return (0);
}