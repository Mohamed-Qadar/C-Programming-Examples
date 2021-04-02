#include<stdio.h>
int main(){
	int a=123;
	int b=1234;
	char user;
	int c;
	while(true){
		printf("please enter you user name:");
		scanf("%s",&user);
		printf("please enter your passawer:");
		scanf("%d",&c);
		if(a==user && b==c){
			printf("welcome to my channal");
			break;
		}
		
	}
	
	
	
	
	return 0;
}
