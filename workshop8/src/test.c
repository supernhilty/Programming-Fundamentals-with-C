#include<stdio.h>
void r(int i);
int main(){
	r(1);
}
void r(int i){
	if(i>5) return ;
	printf("%d ",i);
	return r((i++,i));
}
