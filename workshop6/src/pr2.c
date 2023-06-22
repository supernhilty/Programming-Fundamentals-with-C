#include<stdio.h>
#include<stdlib.h>
int getUserChoice();
int addValue();
int searchVal();
void printArr();
void printArrIn();
void printArrAscend();
int main(){
	double *a;
	int n=0;
	int testS;
	int choice;
	a=calloc(n,sizeof(double));
	do{
		choice=getUserChoice();
		switch(choice){
			case 1:
				addValue(a,&n);
				break;
			case 2:
				testS=searchVal(a,&n);
				if(testS>0){
					printf("The number you want to search is a[%d]=%.3lf\n",testS,a[testS]);
				}else printf("Not found!");
				break;
			case 3:
				printArr(a,&n);
				break;
			case 4:
				printArrIn(a,&n);
				break;
			case 5:
				printArrAscend(a,&n);
				break;
			defaulf:
				printf("Have a Nice Day!");
		}			
	}while(choice>=1&&choice<=5);
	return 0;
}
int addValue(double *a, int *pn){
	*pn+=1;
	a=realloc(a,*pn);
	printf("a[%d]=",*pn-1);
	scanf("%lf",&a[*pn-1]);
}
int searchVal(double *a, int *pn){
	int i;
	printf("The number you want to search: ");
	double search;
	scanf("%lf",&search);
	for(i=0;i<*pn;i++){
		if(a[i]==search) return i;
	}
	return -1;
}
void printArr(double *a, int *pn){
	int i;
	for(i=0;i<*pn;i++){
		printf("a[%d]=%.3lf\n",i,a[i]);
	}
}
void printArrIn(double *a, int *pn){
	double minVal, maxVal;
	int i;
	printf("Min value is: ");
	scanf("%lf",&minVal);
	printf("Max value is: ");
	scanf("%lf",&maxVal);
	for(i=0;i<*pn;i++){
		if(a[i]>=minVal&&a[i]<=maxVal) printf("a[%d]=%.3lf\n",i,a[i]);
	}
}
void printArrAscend(double *a, int *pn){
	int i;
	for(i=*pn-1;i>=0;i--){
		printf("a[%d]=%.3lf\n",i,a[i]);
	}
}
int getUserChoice(){
	printf("===========Menu============\n");
	printf("1-Add a value\n");
	printf("2-Search a value\n");
	printf("3-Print out the array\n");
	printf("4-Print out values in a  range\n");
	printf("5-Print out the array in ascending order\n");
	printf("Others-Quit\n");
	printf("Your choice: ");
	int choice;
	scanf("%d",&choice);
	printf("===========================\n");
	return choice;
}

