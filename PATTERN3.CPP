/*
1
2 5
3 6 8
4 7 9 10
*/

#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int i,j,a=1;
for (i=1;i<=4;i++)
{
 for (j=1;j<=i;j++)
  {
   cout<<a<<" ";
   a++;
  }
 cout<<endl;
}
getch();
return 0;
}