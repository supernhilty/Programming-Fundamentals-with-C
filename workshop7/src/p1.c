#include<stdio.h>
#include<stdlib.h>
#define MaxS 100
#define MaxN 34
int getUserChoice();
void addName();
int searchName();
void rmName();
void ascendOr();
int main(){
	char name[MaxS][MaxN];
	int choice=getUserChoice();
	switch(choice){
		case 1:
			addName(name[MaxS][MaxN]);
			break;
		case 2:
			rmName();
			break;
		case 3:
			searchName();
			break;
		case 4:
			ascendOr(name[MaxS][MaxN]);
			break;
		default:
			printf("Have a Nice Day!");
	}
}
int getUserChoice(){
	printf("1-Add a student\n");
	printf("2-Remove a student\n");
	printf("3-Search a student\n");
	printf("4-Print the list in ascending order");
	printf("5-Quit");
	printf("Your choice: ");
	int choice;
	scanf("%d",&choice);
	return choice;
}
void addName(char name[MaxS][MaxN]){
	int i;
	printf("Nhap ten thu?\n");
	scanf("%d",&i);
	printf("%d. ",i);
	scanf("%s",name[i]);
	strupr(name[i]);
}
int searchName(char name[34]){
	char search[34];
	int i,cmp;
	printf("search for: ");
	scanf("%33[^\n",search[i]);
	for(i=1;i<100;i++){
		cmp=strcmp(search,name[i]);
	}
	if(cmp==1){
		printf("The student you want to find is in the number %d.\n",i);
	}else{
		printf("No result.\n");
	}
	return i;
}
void rmName(){
	int i;
	char remove[34];
	printf("Input name you want to remove: ");
	scanf("%33[^\n",remove[34]);
	searchName(remove[34]);
	name[i]=NULL;
}
void ascendOr(char name[MaxS][MaxN]){
	int i,j;
	char t[34];
	for(i=0;i<100;i++){
		for(j=n-1;j>i;i--){
			if (strcmp(name[j],name[j])<0){
				strcpy(t,name[j]);
				strcpy(name[j],name[j-1]);
				strcpy(name[j-1],t);
			}
		}
	}
	for(i=0;i<100;i++){
		printf("%s",&name[i]);
	}
}
