#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int n,c=0;
cout<<"enter the number ";
cin>>n;
for (int i;i<=n;i++)
{
if (n%i==0)
   {
     c++;
   }
}
if ( c==2)
 {
 cout<<n<<" is a prime number"<<endl;
 }
 else
 {
  cout<<n<<" is not prime number"<<endl;
  }
  getch();
  return 0;
  }