#include<stdio.h>
int checkDate();
int main(){
	int d, m, y;
	printf("Input day: ");
	scanf("%d",&d);
	printf("Input month: ");
	scanf("%d",&m);
	printf("Input year: ");
	scanf("%d",&y);
	if(checkDate(d,m,y)){
		printf("valid date");
	}else{
		printf("invalid date");
	}
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
