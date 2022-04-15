#include <iostream>
using namespace std;
int main(){
	int i,say=0,s,toplam=0,kartno[16],no,carpim;
	cout << "Kart numarasi giriniz: " << endl;
	for(say=0;say<16;say++){
		cin >> no;
		kartno[say] = no;}
	
	for(i=0;i<16;i+=2){
		carpim = kartno[i]*2;
		if(carpim>9){
			kartno[i] = carpim %10 + carpim/10;
		}
		else{
			kartno[i] = carpim;
		}
	}
	
	for(i=0;i<16;i++){
		toplam+=kartno[i];
	}
	if(toplam%10==0){
		cout <<endl <<"kart numarasi gecerli!\n";	}
	
	else{ cout <<endl<< "gecersiz\n" ;
	}
	
	cout << "toplam: "<<toplam;
	}


