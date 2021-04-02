#include<stdio.h>

int main(){
	int a[10]={0};
	int i,j;
	int numbers,k,temp;
	printf("please enter 1 to 10 numbers ");
	for(i=0;i<10;i++){
		temp=0;
		scanf("%d",&numbers);
		for(j=0;j<k;j++){
			if(numbers==a[j]){
				temp=1;
				break;
			}
		}
		if(!temp){
			a[k++]=numbers;
		}
	}
	printf("\nthe resultis ");
	for(i=0;i<10 ,a[i]!=0;i++){
		printf("%d ",a[i]);
	}
	
	
	
	
	
	
	return 0;
}
