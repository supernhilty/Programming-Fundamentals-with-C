#include<stdio.h>
#include<stdlib.h>
void addDrink();
void printKnow();
void printBetween();
void printOrder();
int getUserChoice();
int main(){
	int choice;
	int n=0;
	char name[n][20], make[n][20];
	int volume[n], price[n], duration[n];
	name[n][20]=calloc(n, sizeof(char));
	make[n][20]=calloc(n, sizeof(char));
	volume[n]=calloc(n, sizeof(int));
	price[n]=calloc(n, sizeof(int));
	duration[n]=calloc(n, sizeof(int));
	do{
		choice=getUserChoice();
		switch(choice){
			case 1:
				addDrink(&n,name[n][20],make[n][20],volume[n],price[n],duration[n]);
				break;
			case 2:
				printKnow(&n,name[n][20],make[n][20],volume[n],price[n],duration[n]);
				break;
			case 3:
				printBetween(&n,name[n][20],make[n][20],volume[n],price[n],duration[n]);
				break;
			case 4:
				printOrder(&n,name[n][20],make[n][20],volume[n],price[n],duration[n]);
				break;
		}
	}while(choice>0&&choice<=5);
	return 0;
}
void addDrink(int *pn, char name[*pn][20], char make[*pn][20], int volume[*pn], int price[*pn], int duration[*pn]){
	name=realloc(name,*pn+1);
	make=realloc(make,*pn+1);
	volume=realloc(volume,*pn+1);
	price=realloc(price, *pn+1);
	duration=realloc(duration, *pn+1);
	printf("Name\t Make\tVolume\tPrice\tDuration\n");
	scanf("%s[^\n]\t%s[^\n]\t%d\t%d\t%d\n",&name[*pn-1][20], &make[*pn-1][20], &volume[*pn-1], &price[*pn-1], &duration[*pn-1]);
	}
void printKnow(int *pn, char name[*pn], char make[*pn][20], int volume[*pn], int price[*pn], int duration[*pn]){
	printf("What is brand you want to find?");
	char find[20];
	scanf("%s",&find[20]);
	int i;
	for(i=0;i<*pn;i++){
		if(strcmp(find[20],make[i][20])==0){
			printf("Name\t Make\tVolume\tPrice\tDuration\n");
			printf("%s[^\n]\t%s[^\n]\t%d\t%d\t%d\n",name[i], make[i][20], volume[i], price[i], duration[i]);
		}
	}
}
void printBetween(int *pn, char name[*pn], char make[*pn][20], int volume[*pn], int price[*pn], int duration[*pn]){
	int minV, maxV;
	int i;
	printf("Min volume: ");
	scanf("%d",&minV);
	printf("Max volume: ");
	scanf("%d",&maxV);
	for(i=0;i<*pn;i++){
		if(minV<=volume[i]&&volume<=maxV){
			printf("Name\t Make\tVolume\tPrice\tDuration\n");
			printf("%s[^\n]\t%s[^\n]\t%d\t%d\t%d\n",name[i], make[i][20], volume[i], price[i], duration[i]);
		}
	}
}
void printOrder(int *pn, char name[*pn], char make[*pn][20], int volume[*pn], int price[*pn], int duration[*pn]){
	int i,j;
	for(i=0;i<*pn;i++){
		for(j=*pn-1;j>i;j--){
			if(volume[j]<volume[j-1]){
				int t=volume[j];
				volume[j]=volume[j-1];
				volume[j-1]=t;
			}
		}
	}
	for(i=0;i<*pn;i++){
		printf("Volume");
		printf("Name\t Make\tVolume\tPrice\tDuration\n");
		printf("%s[^\n]\t%s[^\n]\t%d\t%d\t%d\n",name[i], make[i][20], volume[i], price[i], duration[i]);
	}
	
}
int getUserChoice(){
	int choice;
	printf("1-Adding a new soft drink\n");
	printf("2-–Printing out items which belong to a known make\n");
	printf("3-Printing out items whose volumes are between v1 and v2\n");
	printf("4-Printing the list in ascending order based on volumes then prices\n");
	printf("5-Quit\n");
	printf("Your choice: ");
	scanf("%d",&choice);
	return choice;
}
