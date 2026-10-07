#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
	srand(time(NULL));
	int n;
	printf("Entert n  ");
	scanf("%d",&n);
	int A[n];

	for(int i=0;i<n;i++){
		A[i]=(rand()%99)+1;
	}
	for(int i=0;i<n;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(A[j]>A[j+1]){
				int temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",A[i]);
	}
	printf("\n");

}
