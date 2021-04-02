#include<stdio.h>
//bir sayi kontrolu tek mi cift mi
void control();
void stras();

int main(){
  control();
  printf("\n");
  stras();
	
}
void control(){
	int s;
	printf("pls enter num:");
	scanf("%d",&s);
			if(s%2==0){
			printf("%d sayi citfit",s);
	}
else{
		printf("%d sayi tektir",s);
	}

}
void stras(){
	int a,b,i,j;
	printf("plse enter a:");
	scanf("%d",&a);
	printf("plse enter b:");
	scanf("%d",&b);
	for(i=1;i<=a;i++){
		for(j=1;j<=b;j++){
			printf("*");
		}
		printf("\n");
	}
	
	
}	

