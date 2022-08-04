/* using inheritence */
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class base
{
protected :
  int a,b;
  void inputno()
  {
    cout<<"Enter two no.";
    cin>>a>>b;
  }
};
 class sub : public base
 {
   public :
     void max()
     {
       inputno();
       if(a>b)
       {
	 cout<<a<<" is greater";
       }
       else
       {
	 cout<<b<< " is greater";
       }
     }
 };
       int main()
       {
	sub si;
	si.max();
	getch();
	return 0;
     }
