#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int squre(int y){
	
	return y*y*y;
}
int maxismum(int m,int s,int l){
		int temp;
	temp=m;
	if(s>temp){
		temp=s;
	}
	if(l>temp){
		temp=l;
	}
	
	return temp;
	
}
int main(){
	int cuonter;
	for(cuonter=1; cuonter<=10; cuonter++){
	
			printf("cub=%d\n",squre(cuonter));
	}
	srand(time(NULL));
		printf("%d   %d  \n",1+rand()%6,1+rand()%6);
	int numbers,i,toplam=0;
	float ortalama;
	srand(time(NULL));
	printf("sayilar \n");
	for(i=1;i<=6;i++){
		numbers=rand()%100+1;
		toplam=toplam+numbers;
			printf("%d\n",numbers);
	}
	ortalama=toplam/6.0;
		printf("%.2f\n",ortalama);
	int sayi;
	srand(time(NULL));
	sayi=rand()%6+1;
	printf("%d\n",sayi);
	int n=4;
	printf("%.2f\n",sqrt(n));
	int num1,num2,num3;
	printf("please enter numbers: ");
	scanf("%d",&num1);
	printf("please enter numbers: ");
	scanf("%d",&num2);
	printf("please enter numbers: ");
	scanf("%d",&num3);

printf("maxi=%d",maxismum(num2,num2,num3));
	return 0;
}

