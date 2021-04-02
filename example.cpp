#include<stdio.h>
int main(){
	/*
	int a,b,c;
	int sum,avrege,subtr,prod,div,smallest,largest;
	printf("pls enter the value of a:");
	scanf("%d",&a);
	printf("pls enter the value of b:");
	scanf("%d",&b);
	printf("pls enter the value of c:");
	scanf("%d",&c);
	sum=a+b+c;
	printf("sum :%d\n",sum);
	avrege=(a+b+c)/3;
	printf("avrege :%d\n",avrege);
	subtr=a-b-c;
	printf("subtr :%d\n",subtr);
	prod=a*b*c;
	printf("prod :%d\n",prod);
	if(a<b && a<c) 
	{
	smallest=a;
	printf("smallest :%d\n",smallest);}
	if(b<a && b<c){
	smallest=b;
		printf("smallest :%d\n",smallest);
		}
	if(c<a&&c<b){
	smallest=c;
		printf("smallest :%d\n",smallest);
		}
			if(a>b && a>c) 
	{
	largest=a;
	printf("largest :%d\n",largest);}
	if(b>a && b>c){
	largest=b;
		printf("largest :%d\n",largest);
		}
	if(c>a&&c>b){
	largest=c;
		printf("largest :%d\n",largest);
		}
		
		int i,j;
		for(i=1;i<10;i++){
			for(j=1;j<10;j++){
				if(i==1 ||i==3 ||j==1||j==3){
						printf("*");
				}
				else
				 {
				 		printf(" ");
				}
				
			}
				printf("\n");
		}
		
		int i,j;
		for(i=1;i<=6;i++)
		{
			for(j=1;j<=i;j++){
				
				printf("%d",j);
			}
			printf("\n");
		}
		
		//dyramid stars
		int row,space,symbol,n;
		printf("pls enter the number of rows:");
		scanf("%d",&n);
		for(row=1;row<=n;row+=1){
			for(space=1;space<=(n-row);space++)
			printf("*");
			for(symbol=1;symbol<=((2*row)-1);symbol++)
			printf("#");
			printf("\n");
		}
		
		//stars
		int row,col,space;
		for(row=1;row<=20;row++){
			for(col=1;col<=row;col++)
			printf("*");
		printf("\n");
		}
			printf("\n");
		for(row=20;row>=1;row--){
			for(col=1;col<=row;col++)
			printf("*");
		printf("\n");
		}
			printf("\n");
		for(row=1;row<=20;row++){
			for(space=1;space<20-row;space++)
			printf(" ");
			for(col=1;col<=row;col++)
			printf("*");
		printf("\n");
		}
			printf("\n");
		for(row=20;row>=1;row--){
			for(space=1;space<20-row;space++)
			printf(" ");
			for(col=1;col<=row;col++)
			printf("*");
		printf("\n");
		}
		
		int i,j,space;
		for(i=1;i<10;i++){
			for(space=1;space<10-i;space++){
				printf(" ");
			}
			for(j=1;j<i;j++){
				printf(" *");
			}
			printf("\n");
		}
		
		for(i=10;i>=1;i--){
			for(space=1;space<10-i;space++){
				printf(" ");
			}
			for(j=1;j<i;j++){
				printf(" *");
			}
			printf("\n");
		}
		//odd mi even mi?
		int n;
		printf("pls enter num you want to know it is event or odd:");
		scanf("%d",&n);
		if(n%2==0){
			printf("the num you enter is eve :%d",n);
		}
		else{
			printf("the num you enter is odd :%d",n);
		}
		
	//mutply 
	int a,b;
	printf("pls enter  two numbers :");
		scanf("%d%d",&a,&b);
		if(a%b==0){
			printf("%d is a multply of %d",a,b);
		}
		
		printf("%d is not a multply of %d",a,b);
		
	//ubadalida 4 2 1 3 9
	int a,n=42139;
		printf(" %d",n/10000);
		a=n%10000;
		printf(" %d ",a/1000);
    	a=a%1000;
    	printf(" %d ",a/100);
    	a=a%100;
    	printf(" %d ",a/10);
    	a=a%10;
    	printf(" %d ",a);
    
   // separting numbers like this 4 2 1 3 5
    int i,a,n;
    printf("pls enter five idgit:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
    	a=n%10;
    	n=n/10;
    	printf(" %d ",a);
	}
	
	// 0 to 10 square and cubes
	int  i,square,cube;
	printf("i        square          cube");
	for(i=0;i<=10;i++){
		printf("%d\n",i);
		square=i*i;
		printf("%16d\n",square);
		cube=i*i*i;
		printf("%30d\n",cube);
	
	}
	
	//calculating  10 student marks  
	int t=0,a,c,g;
	c=1;
	printf("pls enter grade");
	while(c<10){
		scanf("%d",&g);
		t=t+g;
    	c++;
	}
	a=t/10;
	printf("avrege is %d",a);

//calculating undefine grade 
int counter=0,total=0,grade,avrage;
printf("pls enter grade,if you enter -1 program will end");
scanf("%d",&grade);
while(grade!=-1){
	printf("pls enter grade,if you enter -1 program will end");
scanf("%d",&grade);
total=total+grade;
counter++;
}
if(counter!=0){
	avrage=total/counter;
	printf("avrage is %d",avrage);
}
else
{
	printf("No grade were entered");
}
*/
int a,b,c,d;
printf("a             b              c                d\n");
for(a=3;a<=15;a+=3){
	printf("%d\n",a);
	b=a+2;
	printf("%15d\n\n",b);
	c=a+4;
	printf("%30d\n",c);
	d=a+6;
	printf("%45d\n",d);
}


	return 0;
}

