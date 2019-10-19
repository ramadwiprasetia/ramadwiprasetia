// Example program
#include <iostream>

using namespace std;
int main()
{
    int parkir,harga;
    cout<<"masukkan lama parkir anda "<<endl;
    cin>>parkir;
  
    if(parkir>=0 && parkir<=3){
          harga=parkir*2000;
        
    }
    else if(parkir>=4 && parkir<=7){
          harga=((parkir-3)*1000)+6000;
        
    }else{
        harga=10000;
        }
       
    cout<<"total parkir "<<harga;
    
  system("PAUSE");
}
