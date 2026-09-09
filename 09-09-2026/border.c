#include<stdio.h>
void printBorder(int n){
	for (int i=0;i<n;i++){
		printf("*");
	}
	printf("\n");
}
int main(){
	int a;
	printf("Enter a");
	scanf("%d",&a);
	printBorder(a);
}
