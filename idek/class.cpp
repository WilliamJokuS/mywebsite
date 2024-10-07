#include <bits/stdc++.h>
using namespace std;

class student{// bikin vlass namanya student isinya bisa lu taro apa aj serah
	public: // biar bisa di akses di int main
	string name;
	int score;
	
	void inputData(){//nanti bisa dipake langsung, contoh di line 54
		cout<<"Masukan nama: ";
		cin>>name;
		cout<<"Masukan nilai: ";
		cin>>score;
		return;
	}
	
	
};
student murid[10]; // bikin array of student namanya murid, ukuran 10
// kalo mau bisa pake 'struct' juga, cara kerjanya mirip tapi defaultnya udah public
// jadi gk usah pake 'public:' kyk di line 5 lagi 

//struct student{
//	string name;
//	int score;
//};

bool compareScore(student a,student b){// compare student a sama student b
	if(a.name<b.name)return true;//kalo lebih kecil abjadnya, taro di depan
	else return false;// kalo lebih besar dibelakang
}
bool compareName(student a,student b){
	if(a.score>b.score)return true;// kalo lebih besar nilainya, taro di depan
	else return false;// kalo lebih kecil di belakang
}


void output(){// biar gk ngulang aja outputnya di bawah
	for(int i=1;i<=3;i++){
    	cout<<"Nama: "<<murid[i].name<<" "<<murid[i].score<<endl;
	}
}

int main(){
	//beberapa cara masukin data
	murid[1].name="adrian";
	murid[1].score=95;
	
	cout<<"Masukan nama: ";
	cin>>murid[2].name;
	cout<<"Masukan nilai: ";
	cin>>murid[2].score;
	
	murid[3].inputData();
	
    //sebelom sort
    cout<<"Sebelum sort: \n";
    output();
	
	
    //sort nama
    sort(murid+1,murid+1+3,compareName);//+1 gara2 gw mulai dari index 1
    //+1 +3 gara2 mulai dari index 1 trus size nya 3
    
    cout<<"\nAbis sort nilai: \n";
    output();
	
	//sort nilai
	sort(murid+1,murid+1+3,compareScore);
	cout<<"\nAbis sort nama: \n"; 
	output();
}


