#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int intRandom();
int main(){
	int x,y,count=1,total;
	srand((unsigned int)time(NULL));
	do{
		printf("Input total sought: ");
		scanf("%d",&total);
	}while(total<2||total>12);
	do{
		x=intRandom(1,6);
		y=intRandom(1,6);
		printf("Result of throw %d: %d + %d\n",count,x,y);
		count++;
	}while(x+y!=total);
	printf("You got your total in %d throws!",count);
}
int intRandom(int min, int max){
	return min+(int)(rand()*(max-min+1)/(1+RAND_MAX));
}

