#include<stdio.h>
#include<math.h>
int main(){
	
/*	
	int a;
	int b;
	printf("the even numbers b/w 2 to 100 is:\n");
	
	for(a=2;a<=100;a+=2){
		printf("%d\n",a);
	}
printf("the odd numbers is:\n");
		for( b=1;b<=100; b++){
		if(b%2==1){
			printf("%d\n",b);
		}
		
	}
	*/
	/*
	//a = p(1 + r)n
	int n;
	double a,p=1000,r=0.05;
	printf( "%4s%21s\n", "Year", "Amount on deposit" );
	for(n=1;n<=10;n++){
		a=p*pow(1+r,n);
		printf("%4d%21.2f\n",n,a);
	}
	
	int number;
	printf("please enter a number: ");
	scanf("%d",&number);
	
	switch(number){
		case 2:
			printf("you entered 2");
			break;
			
		case32:
			printf("you entered 3");
			break;
			case 4:
			printf("you entered 4");
			break;
			case 5:
			printf("you entered 5");
			break;
			case 6:
			printf("you entered 62");
			break;
			default:
				printf("i danot know what you entered ");
				break;
	}

	int x=6;
	switch(x){
		case 1:
		printf("x is 1");
		break;
		case 2:
		printf("x is 2");
		break;
		case 3:
		printf("x is 3");
		break;
	default:
		printf("x is an other than 1,2and 3");
		break;
	}
	
	char op;
	int a,b;
	int sum;
	printf("\nplease enter operator like (+,-,/,*......)");
	scanf("%c",&op);
	printf("\npleae enter two number a :");
	scanf("%d%d",&a,&b);
switch(op){
	case '+':
		sum=a+b;
	printf("\n%d",sum);
	break;
	case '-':
		sum=a-b;
	printf("\n%d",sum);
	break;
	case '/':
		sum=a/b;
			printf("\n%d",sum);
	break;
	default:
		printf("you enter wron operator");
		break;
}

*/
int grade,p=0;
int aCounter=0;
int bCounter=0;
int cCounter=0;
int dCounter=0;
int fCounter=0;
printf("enter the leter grede\n");
printf( "Enter the p character to end input.\n" );
while((grade=getchar() ) != p){
	switch( grade ){
		case 'A':
		case 'a':
			aCounter++;
		break;
		case 'B':
		case 'b':
			bCounter++;
		break;
		case 'C':
		case 'c':
			cCounter++;
		break;
		case 'D':
		case 'd':
			dCounter++;
		break;
		case 'F':
		case 'f':
			fCounter++;
		 break;
		case '\n':
		case 't':
		case  ' ':
		break;	
		default:
			printf("incorrect leter entered\n");
			printf("\nenter new letter\n");
			break;	
		}
}
 printf("\nthe totel for each grade are:\n");
 printf("A:%d\n",aCounter);
printf("B:%d\n",bCounter);
printf("C:%d\n",cCounter);
printf("D:%d\n",dCounter);
printf("F:%d\n",fCounter);
/*
int a,b,s;
for(a=10;a>=1;a--){
	for(s=1;s<=10-a;s++){
		printf(" ");
	}
	for(b=1;b<=a;b++){
			printf("*");
	}
		printf("\n");
}
	printf("\n");
for(a=1;a<=10;a++){
	for(s=1;s<=10-a;s++){
		printf(" ");
	}
	for(b=1;b<=a;b++){
			printf("*");
	}
		printf("\n");
}

	printf("\n");
for(a=1;a<=10;a++){
	for(b=1;b<=a;b++){
			printf("*");
	}
		printf("\n");
}
	printf("\n");
	for(a=10;a>=1;a--){
		for(b=1;b<=a;b++){
			printf("*");
		}
		printf("\n");
	}
/*
int a,b,s;
for(a=1;a<=10;a++){
	for(s=1;s<10-a;s++){
		printf(" ");
	}
	for(b=1;b<=a;b++){
		printf(" *");
	}
	printf("\n");
}
for(a=10;a>=1;a--){
	for(s=1;s<10-a;s++){
		printf(" ");
	}
	for(b=1;b<=a;b++){
		printf(" *");
	}
	printf("\n");
}
*/
	return 0;
}
