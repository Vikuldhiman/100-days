/* input an number and check hour minutes in that number */
#include<iostream.h>
#include<conio.h>
class time
{
 int hour,min,x;
 public:
  time(int n)
  {
   x=n;
   hour=n/60;
   min=n%60;
  }
  void show()
  {
   cout<<hour<<" hour and "<<min<<" minutes in "<<x<<endl;
  }
};
int main()
{
 int a;
 clrscr();
 cout<<"enter the number";
 cin>>a;
 time obj(a);
 obj.show();
 getch();
 return 0;
}
