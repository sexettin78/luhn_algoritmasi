#include <stdio.h>
#include <stdlib.h>
int main(){
	int i,say=0,s,toplam=0,kartno[16],no,carpim;
	printf("Kart numarasi giriniz: \n");
	for(say=0;say<16;say++){
		scanf("%d",&no);
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
		printf("\nkart numarasi gecerli!\n");	}
	
	else{  printf("\ngecersiz\n");
	}
	
	}


