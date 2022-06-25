/* check input value is a Alphabet or not and in uppercase or lowercase */
#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
char ch;
cout<<" Type any Character "<<endl;
cin>>ch;
if (ch>=65 && ch<=90 || ch>=97 && ch<=122 ) {
cout<<ch<<" is Alphabet "<<endl;
if (ch<=65||ch>=90) {
cout<< "Alphabet in UPPER CASE"; }
else if (ch<=97||ch>=122) {
cout<<" Alphabet in lower case"; }
}
else {
cout<<ch<<" is not Alphabet "<<endl; }
getch();
return 0;
}