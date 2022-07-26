/* using of class and function to print multiple times of details */
#include<iostream.h>
#include<conio.h>
class information
{
 private:
 int rollno,age;
 char name[20],course[20];
 public:
 void inputinfo()
 {
  cout<<"Enter Roll Number"<<endl;
  cin>>rollno;
  cout<<"Enter Name"<<endl;
  cin>>name;
  cout<<"Enter Age"<<endl;
  cin>>age;
  cout<<"Enter the Course"<<endl;
  cin>>course;
 }
 void showinfo()
 {
  cout<<rollno<<"\t"<<name<<"\t"<<age<<"\t"<<course<<endl;
 }
};
int main()
{
 information info[5];
 int i;
 clrscr();
 for(i=0;i<5;i++)
 {
  info[i].inputinfo();
 }
 cout<<"Roll No\t Name\t Age\t Course\n";
 for(i=0;i<5;i++)
 {
  info[i].showinfno();
 }
 getch();
 return 0;
}