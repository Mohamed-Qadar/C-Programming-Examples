#include<stdio.h>
#include<math.h>
#define RESPONSE_SIZE 40
#define FREQUENCY_SIZE 11
int main(){
	//waxaad qotaa 90,80,70,60,50,40,30,20,10 cagsi ahaan uqor adoo isticmaalihaya array 
	
int arr[9]	={90,80,70,60,50,40,30,20,10};
int a;
for(a=0;a<9;a++){// hada waxaan daabicihayaa mida aska ah
	printf("%d ",arr[a]); 
}
printf("\n");
for(a=8;a>=0;a--){//kana waa midkii aad daba gadiyey
	printf("%d \n",arr[a]);
	
}
//waxaad qortaa programm markuu qofku isticmaalo usheeeg haa inuu isticmaalay numbero so noqnoqday.

int seen[10]={0};
int N,rem;
printf("please enter number:");
scanf("%d",&N);
while(N>0){
	rem=N%10;
	if(seen[rem]==1)
	break;
	seen[rem]=1;
	N=N/10;
}
if(N>0){
	printf("yes");
	
}
else
{
	printf("No");
}

/*arday baa waxaa lasameeyey cod uruurin kusaabsan cunto
marka ardayda qaar waxay dheheen cuntadu wey wanaagsan tahay qar kalana waxay dheheen wey xuntahay
marka waxaa lagaaga baahan yahay cadaka solalaabtay inaad xisaabiso
*/
int rating,answer;
int responses[ RESPONSE_SIZE ] = { 1, 2, 6, 4, 8, 5, 9, 7, 8, 10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6,5, 6, 7, 5, 6, 4, 8, 6, 8, 10 };
int frequency[ FREQUENCY_SIZE ] = { 0 };
for ( answer = 0; answer < RESPONSE_SIZE; answer++ ){
	++frequency[responses[answer]];
}
printf( "%s%17s\n", "Rating", "Frequency" );
for ( rating = 1; rating < FREQUENCY_SIZE; rating++ ){
printf( "%6d%17d\n", rating, frequency[ rating ] );
}





	return 0;
}

