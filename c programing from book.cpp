#include<stdio.h>
int main(){
int x,i,f=1;
printf("enter two number from in range 1-20:");
scanf("%d",&x);
for(i=1;i<=x;i++){
f=f*i;
printf("%d!\n%21d\n",(x-1),f);

}
int n=1;
if(n<3)
printf("%d\n",n);
n+1;
printf("%d\n",n);



	return 0;
}
