#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void addEmpl();
int findEmpl();
int rmEmpl();
int printSalaryAllowance();
int main(){
	char code[100][8], name[100][20];
	int n=0;
	int choice;
	double *salary=calloc(n,sizeof(double));
	double *allowance=calloc(n,sizeof(double));
	do{
		choice=getUserChoice();
		switch(choice){
			case 1:
				addEmpl(&n,code[100][8],name[100][20],salary,allowance);
				break;
			case 2:
				findEmpl(&n,code[100][8],name[100][20],salary,allowance);
				break;
			case 3:
				rmEmpl(&n,code[100][8],name[100][20],salary,allowance);
				break;
			case 4:
				printSalaryAllowance(&n,code[100][8],name[100][20],salary,allowance);
				break;
			default:
				printf("Have a Nice Day!");
		}		
	}while(choice>=0&&choice<=5);
	return 0;
}
void addEmpl(int *pn, char code[*pn][8],char name[*pn][20], double salary[*pn], double allowance[*pn]){
	*pn+=1;
	salary=realloc(salary,*pn);
	allowance=realloc(allowance,*pn);
	printf("Code: ");
	fflush(stdin);
	scanf("%8",&code[*pn-1]);
	fflush(stdin);
	printf("Name: ");
	fflush(stdin);
	scanf("%20",&name[*pn-1]);
	strupr(name[*pn-1]);
	printf("Salary: ");
	scanf("%lf",&salary[*pn-1]);
	printf("Allowance: ");
	scanf("%lf",&allowance[*pn-1]);
}
int findEmpl(int *pn, char code[*pn][8],char name[*pn][20], double salary[*pn],double allowance[*pn]){
	int i, test;
	printf("Input name's employee you want to find: ");
	char findN[20];
	scanf("%20",findN);
	strupr(findN);
	for(i=0;i<*pn;i++){
		test=strcmp(findN[20],name[i][20]);
		if(test==0){
			printf("Code: %8\tName: %20\tSalary: %lf\tAllowance: %lf\n",*pn, code[*pn][8], name[*pn][20], salary[*pn], allowance[*pn]);
		}else{
			printf("Name not found!");
		}
	}
}
int rmEmpl(int *pn, char code[*pn][8],char name[*pn][20], double salary[*pn],double allowance[*pn]){
	char delC[8];
	int i,j;
	printf("Input employee's code you want to remove: ");
	scanf("%8",delC);
	for(i=0;i<*pn;i++){
		if(strcmp(code[i][8],delC[8])==0){
			for (j = i+1; j < *pn; j++)
				{ 
		            strcpy(name[i], name[j]);
		            strcpy(code[i], code[j]);
		            salary[i] = salary[j];
		            allowance[i] = allowance[j];
		        }
		    (*pn)--;
		    printf("Success!\n");
		}
	}
}
int printSalaryAllowance(int *pn, char code[*pn][8],char name[*pn][20], double salary[*pn],double allowance[*pn]){
	int i, j;
	for (i = 0; i < *pn-1; i++)
		for (j = *pn-1; j > i; j--)
			if ( (salary[j] + allowance[j]) > (salary[j-1] + allowance[j-1]) )
			{
				char t[21];
	            strcpy(t, name[j]);
	            strcpy(name[j], name[j-1]);
	            strcpy(name[j-1], t);
	            
	            char tu[8];
	            strcpy(tu, code[j]);
	            strcpy(code[j], code[j-1]);
	            strcpy(code[j-1], tu);
	            
	            double tg = salary[j];
	            salary[j]=salary[j-1];
	            salary[j-1]=tg;
	            
	            double tb = allowance[j];
	            allowance[j]=allowance[j-1];
	            allowance[j-1]=tb;
			}
	for (i = 0; i < *pn; i++)
    	printf("Code:%8s|Name:%20s|salary:%3.3lf|allowance:%3.3lf \n", code[i], name[i], salary[i], allowance[i]);
}
int getUserChoice(){
	printf("1-Adding a new employee\n");
	printf("2-Find data about employees using a name inputted\n");
	printf("3-Remove an employee based on a code inputted\n");
	printf("4-Print the list in descending order based on salary + allowance.\n");
	printf("5-Quit\n");
	printf("Your choice: ");
	int choice;
	scanf("%d",&choice);
	return choice;
}
