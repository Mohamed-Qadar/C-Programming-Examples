#include<stdio.h>
#include<math.h>
int forloops(){
	int a;
	for(a=7;a<=77;a+=7)
	printf("%d\n",a);

}
int sumofeven(){
	int sum=0;
	int b;
	for(b=2;b<=100;b+=2){
		sum=sum+b;
	
	}
		printf("sum of evens 2-100 is:%d\n",sum);
}
int investment(){
	int n;
	double rate=0.05;
	double amount;
	double p=1000.00;
	printf("%4s%15s\n","year",  "amout rate");
	for(n=1;n<=10;n++){
		amount=p*pow(1.0+rate,n);
		printf("%d%15.2lf\n",n,amount);
	}
}
int numtest(){
	int num;
	printf("please enter any number i want to know the number you enter is pozitif or not:");
	scanf("%d",&num);
	if(num<0){
	printf("%d this number is negatif",num);
		
	}	
	else if(num>0)
	{
			printf("%d this number is pozitif",num);
	}
	else{
		printf("%d this number is zero",num);
	}
}
int theGreatest(){
	int x,y,z,eb;
	printf("please enter any number :");
		scanf("%d",&x);
		printf("please enter any number :");
		scanf("%d",&y);
		printf("please enter any number :");
		scanf("%d",&z);
		eb=x;
		if(y>eb){
			printf("%d is greatest",y);	
		}
		y=eb;
	 if(z>eb){
				printf("%d is greatest",z);		
		}
		else
		{
				printf("%d is greatest",eb);	
		}
		
}
int fazlacalisma(){
	int nm,fm,tm;
	printf("pls enter normmal salary:");
	scanf("%d",&nm);
	printf("pls enter extra time you work:");
	scanf("%d",&fm);
	if(fm>1 &&fm<=10){
		fm=fm*1000000;
		tm=nm+fm;
		printf("tam masan:%d",tm);
	}
	if(fm>11 &&fm<=20){
		fm=fm*12500000;
			tm=nm+fm;
		printf("tam masan:%d",tm);
	}
}

int main(){
	forloops();
		printf("\n");
	sumofeven();
		printf("\n");
	investment();
		printf("\n");
	numtest();
		printf("\n");
		theGreatest();
		printf("\n");
		fazlacalisma();
	
	return 0;
}
