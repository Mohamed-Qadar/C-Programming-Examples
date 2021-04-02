#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a[50];
     int n,tem,i,j,x;
     j=n-1;
     printf("please enter the element:");
     scanf("%d",&n);
         printf("please enter the Array numbers:\n");
 printf("\nArray befor swepping:\n ");
         for(i=0;i<n;i++)
            scanf("%d",&a[i]);

           printf("%d ",a[i]);

          printf("\nArray after swepping: ");
         for(i=0;i<n/2;i++){
                x=a[i];
                a[i]=a[j];
                a[j]=x;
                j=j-1;
              printf("%d ",a[i]);

         }



    return 0;
}
