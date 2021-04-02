#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	/*
int a,b;
srand(time(NULL));
b=rand()%6+1;
a=rand()%6+1;
printf("%d\n%d",a,b);

int a=5,b=6;
int x,y;
printf("please enter a number: ");
scanf("%d",&x);
printf("please enter a number: ");
scanf("%d",&y);
if(x==5&& y==6){
	printf("the number you entered is:%d and %d",x,y);
}
else if(x==5 && y !=6)
{
		printf("the number you entered is not  :%d and %d\n",a,b);
		printf("but one of them is correct you entered this numbers %d and %d",x,y);
}
else if(x!=5 || y ==6){
			printf("the number you entered is not  :%d and %d\n",a,b);
		printf("but one of them is correct you entered this numbers %d and %d",x,y);
}
*/
int grade,i,sum=0;
double aver;
for(i=1;i<=10;i++){
	printf("please enter your grade:");
	scanf("%d",&grade);
	sum=sum+grade;
	
}
aver=sum/10.0;
printf("the average is: %.2f",aver);



	return 0;
}
