/* using do-nothing condtructor */
#include<iostream.h>
#include<conio.h>
class Addition
{
  int a,b;
  public:
  Addition(int x,int y)
  {
    a=x;
    b=y;
  }
  void show()
  {
    cout<<a<<endl<<b<<endl;
  }
  Addition sum(Addition t)
  {
    Addition temp;
    temp.a=a+t.a;
    temp.b=b+t.b;
    return(temp);
  }
  Addition()
  {}
};
int main()
{
  clrscr();
  Addition obj1(10,20);
  Addition obj2(100,200);
  obj1.show();
  obj2.show();
  Addition obj3;
  obj3=obj1.sum(obj2);
  cout<<"After Addition"<<endl;
  obj3.show();
  getch();
  return 0;
}