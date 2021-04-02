#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
/*	
	int i;

	srand(time(NULL));
	for(i=1;i<=20;i++){
		
		printf("%10d",1+rand()%6);
		if(i%5==0){
			printf("\n");
	}

	}
	*/
	int i;
	signed seed;
	printf("please enter number");
	scanf("%u",&seed);
	srand(seed);
	for(i=1;i<=10;i++){
		printf("%10d",1+rand()%6);
			if(i%5==0){
			printf("\n");
	}

	}
	
	
return 0;
}
