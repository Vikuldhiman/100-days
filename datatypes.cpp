/* print data types values saperated :int , float, char, long, double , respectively */
#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   long lg;
   char ch;
   float ft;
   double dl;
   cin>>n>>lg>>ch>>ft>>dl;
   cout<<n<<endl<<lg<<endl<<ch<<endl;
   cout<<fixed<<setprecision(3)<<ft<<endl;
   cout<<fixed<<setprecision(9)<<dl<<endl;
      // Complete the code.
    return 0;
}