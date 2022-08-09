/* using protected class and function student and p[layer and show rersult()*/
#include<iostream.h>
#include<conio.h>
class student 
{
   protected:
        int m1,m2,m3;
        void inpitmarks()
        {
						cout<<"Enter the marks of three subject";
				    cin>>m1>>m2>>m3;
				}
};
 class player
 {
	   protected:
	 				int s1,s2;
	 void inputscore()
	 { 
		  cout<<"Enter two scores":
		 cin>>s1>>s2;
	 }
 };
 class collage:public student ,public player
 {
   	int totalmarks,totalscore;
		public:
		 result()
		 {
		  inputmarks();
			inputscore();
						totalmarks=m1+m2+m3;
						totalscore=s1+s2;
						 				cout<<"Total marks ="<<totalmarks;
										cout<<"\n total score ="<<totalscore;
			}
	
};
int main()
{ 
			collage cl;
	    cl.result();
	    getch();
	    return 0;
}
                
 





















<<
