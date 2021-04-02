#include<stdio.h>
int subtr(int sayi1,int sayi2){
	int result;
	result=sayi1-sayi2;
	return result;
}
int add(int a,int b){
	int result;
	result=a+b;
	return result;
}
int squer(int y){
	return y*y;
	
}
char harfnotu(int vize,int final){
	float ortalama;
	char harf;
	ortalama =vize*0.6+final*0.4;
	if(ortalama<=50){
	harf='F';	
	}
	
	else if(ortalama<=60){
	harf='D';	
	}
	
	else if(ortalama<=70){
			harf='C';
	}

	else if(ortalama<=80){
			harf='B';
	}

	else if(ortalama<=100){
		harf='A';	
	}

	return harf;
}
int main(){
	
	int v,f;
	int num1,num2;
	int a,b;
	int x;
	printf("lutfen vize notunuz girin: ");
	scanf("%d",&v);
		printf("lutfen final notunuz girin: ");
	scanf("%d",&f);
	printf("harf notunu=%c\n",harfnotu(v,f));
	
	printf("please enter a number : ");
	scanf("%d",&num1);
	printf("please enter a number : ");
	scanf("%d",&num2);
	printf("please enter a number : ");
	scanf("%d",&a);
	printf("please enter a number : ");
	scanf("%d",&b);
	printf("result=%d",subtr(num1,num2));
	printf("\n");
		printf("result=%d\n",add(a,b));
		for(x=1;x<=10;x++){
			printf("result=%d\n",squer(x));
			
		}
}
