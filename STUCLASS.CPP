/* using of class and function to print the details */
#include<iostream.h>
#include<conio.h>
class student
{
 private:
 int rollno,age;
 char name[20],course[20];
 public:
 void inputdetails()
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
 void showdetails()
 {
  cout<<"Roll Number = "<<rollno<<endl;
  cout<<"Name = "<<name<<endl;
  cout<<"Age = "<<age<<endl;
  cout<<"course = "<<endl;
 }
};
int main()
{
 clrscr();
 student stu;
 stu.inputdetails();
 stu.showdetails();
 getch();
 return 0;
}