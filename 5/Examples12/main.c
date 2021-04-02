#include <stdio.h>
#include <stdlib.h>
int test();
int star();
int squer();
int main()
{
   test();
    printf("\n");
     star();
      printf("\n");
       squer();
       printf("\n");
    printf("Hello world!\n");
    return 0;
}
test(){
int pass,failer,result;
int counter=1;
while(counter<=10){
printf("please enter 1=pass 2=failer:(1 or 2)");
scanf("%d",&result);
counter++;
if(result==1){
    pass=pass+=1;
}
else{
    failer++;
}

}

printf("pass:%d\nfailer:%d",pass,failer);


}
 star(){
 int n,i,f=1;
 printf("please enter any number  you want to know fact");
 scanf("%d",&n);
 i=1;
 while(i<=n){
    f =f*i;
    i++;
 }
 printf("f:%d",f);
 }
  squer(){
  int x,y=1;
  for(x=1;x<=10;x++){
   y=x;
   y=y*y;
    printf("X: %d\n",y);
  }

  }
