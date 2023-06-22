#include<stdio.h>
#include<math.h>
int posiVsCr();
int main(){
	printf("/circle having the center is (0,0) the relative position of this point with the circle/\n--------------------------------------------------\n");
	double x,y,r;
	printf("Input point:\n");
	scanf("%lf\n%lf",&x,&y);
	do{
		printf("radius = ");
		scanf("%lf",&r);
	}while(r<0);
	int rs=posiVsCr(x,y,r);
	switch(rs){
		case 1:
			printf("The point is in the circle");
			break;
		case 0:
			printf("The point is on the circle");
			break;
		default:
			printf("The point is out of the circle");
	}
	return 0;	
}
int posiVsCr(double x, double y, double r){
	double d=x*x+y*y;
	double r2=r*r;
	if(d<r2) return 1;
	else if(d==r2) return 0;
	return -1;
}

