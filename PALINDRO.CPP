/* input any number and check that number is palindrome or not */
#include<iostream.h>
#include<conio.h>
int main()
{
int n,rev=0,rem;
cout<<"enter any number";
cin>>n;
int temp=n;
while(n>0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(rev==temp) {
cout<<temp<<" is palindrome number"<<endl; }
else {
 cout<<temp<<" is not a palindrome number"<<endl;
 }
 getch();
 return 0;
 }
