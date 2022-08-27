/* using constructor */
#include<iostream.h>
#include<conio.h>
class calculation
{
int n;
public:
calculation()
{
cout<<"enter the number";
cin>>n;
}
void square()
{
 cout<<"Square of"<<n<<"is ="<<n*n<<endl;
 }
};
int main()
{
clrscr();
calculation obj1;
obj1.square();
getch();
return 0;
}

