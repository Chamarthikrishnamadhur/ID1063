#include<stdio.h>
//code tto count the no of consecutive ones from given index
int runLength(int a[],int n,int i){
	int sum=0;
	for (int p=i;p<n;p++){
		if(a[p]==0){
			return sum;
		}
		sum++;
	}
	return sum;
}
int stu(int a[], int n, int k ){
	//detecting if the consecutive ones start hgere
	for(int i=0;i<n;i++){
		if(runLength(a,n,i)>k){
			return i+1+k;//they start so we return the last index of the streak
		}
	}
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	int k;
	scanf("%d",&k);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("%d",stu(a,n,k));
}
