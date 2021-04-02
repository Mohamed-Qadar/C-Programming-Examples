#include<stdio.h>
int add(int a,int b){

    return a + b;
}
int subtract(int a,int b){
    return a - b;
}
int multiply(int a,int b){
    return a * b;
}

 int main()
{
 char continou;
  do{
   int num1, num2;
  int option;
  

  printf("1:sum of two numbers:\n");
  printf("2:diference of two numbers:\n");
  printf("3:proct of two numbers:\n");
  printf("select which one you want: ");
  scanf("%d",&option);

  switch(option){
    case 1:
   printf("first number:");
  	scanf("%d",&num1);
     printf("second number:");
     scanf("%d",&num2);
  		printf("%d + %d = %d\n", num1, num2, add(num1, num2));
      break;
    case 2:
    	 printf("first number:");
  	scanf("%d",&num1);
     printf("second number:");
     scanf("%d",&num2);
      printf("%d - %d = %d\n", num1, num2, subtract(num1, num2));
      break;
    case 3:
    	 printf("first number:");
  	scanf("%d",&num1);
     printf("second number:");
     scanf("%d",&num2);
      printf("%d * %d = %d\n", num1, num2, multiply(num1, num2));
      break;
      default:
      	printf("you enter wrong input");

  }
printf("do you to continoue y/n ?");
      scanf("%d",&continou);
}while(continou=='y');


}
