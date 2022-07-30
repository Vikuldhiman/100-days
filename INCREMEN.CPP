#include<iostream.h>
#include<conio.h>
class test
{
 int a;
 static int b;
 public :
 void setvalue(int  x,int y)
 {
  a=x;
  b=y;
 }
 void show()
 {
  cout<<a<<endl<<b<<endl;
 }
 static void increment()
 {
  b++;
 }
};
int test::b;
int main()
{
 clrscr();
 test obj1,obj2;
 obj1.setvalue(10,10);
 obj2.setvalue(20,20);
 obj1.show();
 test::increment();
 obj2.show();
 getch();
 return 0;
}