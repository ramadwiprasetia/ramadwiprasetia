#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
  int nim,kehadiran,tugas,uts,uas;
  float totalnilai;
  string nama;
  string hasil;
  cout<<"masukkan nama kamu ";
  cin>>nama;
  cout<<"masukkan nim kamu ";
  cin>>nim;
  cout<<"masukkan jumlah kehadiran ";
  cin>>kehadiran;
  cout<<"masukkan jumlah tugas ";
  cin>>tugas;
  cout<<"masukkan jumlah uts ";
  cin>>uts;
  cout<<"masukkan jumlah uas ";
  cin>>uas;
  
  
  totalnilai=(kehadiran*0.1)+(tugas*0.2)+(uts*0.3)+(uas*0.4);
 
  if(kehadiran||tugas||uts||uas==0){
      hasil="e";
      }
  else if(totalnilai>80){
      
      hasil="A";
      }
      else if(totalnilai>=71 && totalnilai<=79){
           hasil="B";
          }
          else if(totalnilai>=61 && totalnilai<=70){
          hasil="C";
          }
          else if(totalnilai>=50 && totalnilai<=60){
           hasil="D";
          }
          else {
           hasil="E";
          }
 cout<<"+++++++++++++++++++++++++++"<<endl;
 cout<<"Nama : "<<nama<<endl;
 cout<<"NIM : "<<nim<<endl;
 cout<<"Nilai "<<hasil<<endl;
 
 system("PAUSE");
}