//code by madhur
//on 23-09-26
#include<stdio.h>
//use -lm
#include<math.h>
//squares and adds and returns the root mean
double rms(double *a, int n){
	double sum=0;
	for (int i=0;i<n;i++){
		sum+=pow(a[i],2);
	}
	return (pow(sum/n,0.5));
}
int main(){
	int n;
	scanf("%d",&n);
	double a[n];
	for(int i=0;i<n;i++){
		scanf("%lf",&a[i]);
	}
	printf("%.2lf",rms(a,n));

}
