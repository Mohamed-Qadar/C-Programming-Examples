#include<stdio.h>
int main(){
	char sehir[15][15];
	int a;
	for(a=0;a<3;a++){
    printf("sehirler gin:");
	scanf("%s",&sehir[a]);
	
	}

	for(a=0;a<3;a++){
		printf("\n");
		printf("girdiginiz sehiler bunlardir:%s ",sehir[a]);	
	}
	
	
	return 0;
}
