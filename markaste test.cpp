#include<stdio.h>
struct Bilgiler{
	int kimlik;
	int dogum;
	char ism[20];
}Bilgim;
int main(){
	
Bilgim ={990,1997,"mohamed ibrahim abdi"};
printf("%d  %d  %s",Bilgim.kimlik,Bilgim.dogum,Bilgim.ism);

	
	
	
	return 0;
}
