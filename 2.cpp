// Example program
#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
  int a,b,c,d,e,f,g,h,i,j,k,l,m;
  
 cout<<"masukkan total belanjaan ";
 cin>>a;
 cout<<"masukkan uang bayaran anda ";
 cin>>b;
 
 c=b-a;
 cout<<"Total Kembalian "<<c<<endl;
 
 
 d=c%50000;
 e=c/50000;
 f=d%20000;
 g=d/20000;
 h=f%10000;
 i=f/10000;
 k=h%5000;
 l=h/5000;
 m=k/2500;
 cout<<e<<" x 50000"<<endl;
 cout<<g<<" x 20000"<<endl;
  cout<<i<<" x 10000"<<endl;
 cout<<l<<" x 5000"<<endl;
  cout<<m<<"2500 disumbangkan"<<endl;
 system("PAUSE");
}
