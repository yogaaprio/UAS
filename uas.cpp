#include<stdio.h>
main(){
	printf("YOGA APRIO PRATAMA\n");
	printf("1911511655\n");
	printf("UAS BHS.PEMROGRAMAN DASAR\n");
	int x,y,z;
	printf("masukan tinggi pohon: ");
	scanf(" %i", &z);
	printf("```\n");
	
	for(x=1; x<=z; x++)
	{
		for(y=1; y<=x; y++){
			if(x+y<=z){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
printf("```");
}
