#include <stdio.h>
int main()
{
   /*
   int numbers[]={1,2,3,4,5,6};
   int i=0;
   for(;i<6;i++){
   	printf("%d\n",numbers[i]);
   } 
   */
    /*
   int number[5];
   int i,sum=0;
   for(i=0;i<5;i++){
   	printf("please enter number :");
   	scanf("%d",&number[i]);
   }
   for(i=0;i<5;i++){
   		sum=sum+number[i];
   }
   
   printf("sum :%d",sum);
    */
    /* 1 2 3
       4 5 6
        7 8 9
    
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row,col;
    for(row=0;row<3;row++){
    	for(col=0;col<3;col++){
    		printf("%d ",matrix[row][col]);
		}
		printf("\n");
	}
    */
   
    /*
    int matrix[3][3];
    int row,col;
    int sum=0;
    for(row=0;row<3;row++){
    	for(col=0;col<3;col++){
    		printf("please matrix :");
    	scanf("%d",&matrix[row][col]);
		}

	}
    
     for(col=0;col<3;col++){
    	for(row=0;row<3;row++){
    	sum=sum+matrix[row][col];
		}
		printf("%d ",sum);
		sum=0;
	}
     */
     int a[2][3]={{1,2,3,},{4,5,6}};
     int i,j;
     for(i=0;i<3;i++){
     	for(j=0;j<4;j++){
    	printf("%d ",a[i][j]);
	}
	printf("\n");
	 }
  
    
    
   
   
   return 0;
}
