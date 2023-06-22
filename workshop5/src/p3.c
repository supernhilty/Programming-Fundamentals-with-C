#include<stdio.h>
#include<stdlib.h>
int checkDate();
int inputcheckDate();
void charBet();
int menu();
int main(){
	switch(menu()){
		case 1:
			inputcheckDate();
			break;
		case 2:
			charBet();
			break;
		default:
			printf("Quit!");
	}	
	return 0;
}
int checkDate(int d, int m, int y){
	int maxd=31;
	if(d<1||d>31||m<1||m>12) return 0;
	if(m==4||m==6||m==9||m==11) maxd=30;
	else if(m==2){
		if(y%400==0||y%4==0&&y%100!=0) maxd=29;
		else maxd=28;
	}
	return d<maxd;
}
int inputcheckDate(){
	int d, m, y;
	printf("Input day: ");
	scanf("%d",&d);
	printf("Input month: ");
	scanf("%d",&m);
	printf("Input year: ");
	scanf("%d",&y);
	if(checkDate(d,m,y)){
		printf("valid date\n");
	}else{
		printf("invalid date\n");
	}
}
void charBet(){
	char a, b;
	int i;
	printf("Enter character 1: ");
	fflush(stdin);
	scanf("%c",&a);
	printf("Enter character 2: ");
	fflush(stdin);
	scanf("%c",&b);
	for(i=a;i<=b;i++){
		printf("%3c: %3d, %3xh\n",i,i,i);
	}
}
int menu(){
	int mode;
	do{
		printf("--------Menu-------\n");
		printf("1-Processing date data\n");
		printf("2-Character data\n");
		printf("3-Quit\n");
		printf("Your choice: ");
		scanf("%d",&mode);
	}while(mode<1||mode>3);
	return mode;
}

