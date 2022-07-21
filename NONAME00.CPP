 #include<iostream.h>
 #include<conio.h>
 int main()
 {
 clrscr();
 int n, rem,temp, sum=0;
 cout<<"enter any four digit number";
 cin>>n;
 n=temp;
 while(n>0)
 {
 rem=n%10;
 if(rem/2==0) {
 sum=sum+rem;
 }
 n=n/10;
 }
 cout<<"sum="<<sum;
 getch();
 return 0;
 }
