#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand((unsigned int)time(NULL));
	int total, x, y,count=1;
	printf("Ball Lottery\n==============\n");
	printf("Total sounght: ");
	scanf("%d",&total);
	do{
		x=intRandom(1,10);
		y=intRandom(1,10);
		printf("Results of picks %d and %d: %d + %d\n",count++,count,x,y);
		count++;
	}while(total!=(x+y));
	printf("You got your total in %d picks!",count);
}
int intRandom(int min, int max){
	return min+(int)(rand()*(max-min+1))/(1+RAND_MAX);
}

