#include<stdio.h>
void tabl2(){
	int x,y,table2=12,lar=12;
	int i,j; 
	i=1;
	while(i<=table2){
		j=0;
		while(j<=lar){
			printf("%d x %d = %d\n",i,j,i*j);
			j++;
		}
		printf("\n");
		i++;
	}
}
int table();
int main(){
	tabl2();
table();
	return 0;
}
int table(){
	int a,b;
	int tab=12;
	int max=12;
	for(a=1;a<=tab;a++){
		for(b=1;b<=max;b++){
		printf("%d x %d = %d\n",a,b,a*b);
		}
			
		printf("\n");
	}
	
}
