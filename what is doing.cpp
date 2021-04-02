#include<stdio.h>
void mult(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int main(){
	int a,b,result;
	a=9;
	b=6;
	printf("once %d %d\n",a,b);
	mult(&a,&b);
	printf("x:%d y:%d",a,b);

	return 0;
}
