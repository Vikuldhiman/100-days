/* input five subject marks and calculate percentage and total marks using class*/
#include<iostream.h>
#include<conio.h>
class student
{
private :
int a,b,c,d,e,t;
float p;
public :
 void inputmarks()
 {
 cout<<"enter the marks of five subject" <<endl;
 cin>>a>>b>>c>>d>>e;
 }
 void result()
 {
 t=a+b+c+d+e;
 p=t/5.0;
 cout<<" the total marks ="<<t<<endl;
 cout<<" total percentage ="<<p<<endl;
 }
}
int main()
{
 clrscr();
 student stu;
 stu.inputmarks();
 stu.result();
 getch();
 return ();
}