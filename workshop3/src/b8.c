#include<stdio.h>
double makeDouble();
int main(){
	printf("Input integral part: ");
	int ip;
	scanf("%d",&ip);
	printf("Input fraction part: ");
	int fp;
	scanf("%d",&fp);
	printf("Output: %.3lf",makeDouble(ip,fp));
}
double makeDouble(int p1, int p2){
	double fp=p2;
	while(fp>=1){
	fp/=10;
	}
	if(p1>0) return p1+fp;
	else return p1-fp;
}

