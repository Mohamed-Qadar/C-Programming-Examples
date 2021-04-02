#include<stdio.h>
int maximum(int y, int x, int z);
int minimum(int q, int w, int e);
int main(){
int a,b,c;
printf("please entre a number: ");
scanf("%d",&a);
printf("please entre a number: ");
scanf("%d",&b);
printf("please entre a number: ");
scanf("%d",&c);
	printf("maximum:%d ",maximum(a,b,c));
	printf("\n\nI wana to find,was entered number which one is smallest\n");
	int s,d,f;
	printf("please entre a number: ");
scanf("%d",&s);
printf("please entre a number: ");
scanf("%d",&d);
printf("please entre a number: ");
scanf("%d",&f);
printf("minmum is:%d",minimum(s,d,f));
	

//printf("Data :%s\n",__DATE__);
//printf("Time :%s\n",__TIME__);

return 0;
}
maximum(int y, int x, int z){
	int max;
	max=y;
	if(x>max){
		max=x;
	}
 if (z>max) 
	{
		max=z;
	}
	return max;
}
minimum(int q, int w, int e){
int min;
min=q;
if(w<min){
	min=w;
}	
else if(e<min){
	min=e;
}	
return min;	
}
