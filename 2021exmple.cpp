#include <stdio.h>
int main() {    

    int c,num,number1, number2, sum;
    
    printf("Enter three integers: ");
    scanf("%d",&num);
    scanf("%d",&number1);
    scanf("%d",&number2);
    // calculating sum
    sum = number1 + number2;
    c=sum*num;
    printf("%d",c);
    
		 
	/*if(sum<=10){  
	 printf("please Renter two integers: ");
    scanf("%d %d", &number1, &number2);
      printf("%d + %d = %d", number1, number2, sum);	
	}   
   */
   
    return 0;
}
