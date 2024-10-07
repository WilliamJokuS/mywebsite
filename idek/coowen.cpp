#include <iostream>
using namespace std; 

class calculator { 
    private : 
    int jumlah , num[100], N, i; 
    public : 
    
    void input() { 
      
      cout<<"masukan jmlh data ";
      
      cin>>N;

      for(i=1 ; i<=N ; i++) { cout<<"masukkan data ke "<<i<<" ";
        cin>>num[i];}
}
    
      void output() {   
        
      jumlah=0;

      for(i=1 ; i<=N ; i++) 
      { jumlah = jumlah + num[i];   }

      cout<<"hasil adalah "<<jumlah;
      } 
      
  
  };
int main() {
   
  calculator calc ;
  int pilih;
  cout<< " tekan angka 1 untuk mulai";
  cin>>pilih;
  
  switch(pilih)  {
    
  case 1 :  
  calc.input();
  calc.output();
  break;
  
 } 
  return 0;
}


