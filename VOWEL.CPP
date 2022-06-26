/* input an alphabet and find alphabet is vowel or consonant */
#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
char ch;
cout<<"enter the Alphabe t";
cin>>ch;
if (ch=='a'|| ch=='A'|| ch=='e'|| ch=='E'|| ch=='i' || ch=='I'|| ch=='o' || ch=='O' || ch=='u'|| ch=='U')
{
cout<<ch<<" is Vowel";
}
else
{
cout<<ch<<" is consonant";
}
getch();
return 0;
}
