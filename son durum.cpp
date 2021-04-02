#include<stdio.h>
char *func(char *s,char c, int num){
	char *ptr=(char *)mmalloc (strlen(s)+2);
	int k;
	for(k=0;k<num;k++){
		ptr[k]=s[k];
	}
	ptr[num]=c;
	for(k=num;k<=strlen(s);k++){
		ptr[k+1]=s[k];
	}
	return ptr;
}
int main(){

	
	
	
	
	return 0;
}
