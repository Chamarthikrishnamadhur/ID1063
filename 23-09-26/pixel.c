#include<stdio.h>
//Function to sdit the value of pixels
//m is rows n is cols, a is the array, t is threshhold
void pixel(int m,int n,int a[][n], int t){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[m][n]>=t && a[m][n]<=255){
				a[m][n]=255;
			}
			else{a[m][n]=0;}
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[m][n]);
		}
		printf("\n");
	}
//taking rows and cols and threshold
}
int main(){
	int m,n,t;
	printf("Enter rows: ");
	scanf("%d",&m);
	printf("\n Enter cols: ");
	scanf("%d",&n);
	printf("\n Enter threshold: ");
	scanf("%d",&t);
	printf("\n Enter matrix:\n ");
	int a[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[m][n]);
		}
	}
	pixel(m,n,a,t);
}
