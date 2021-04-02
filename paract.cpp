#include<stdio.h>
int main(){

int a[]={11,22,33,44,55};
int *p=a;
int b=8;
char *c="hello";
printf("%s\n",&c);
printf("%d\n",*(++p));
printf("%d",b++);
	
	
	

	return 0;
}
