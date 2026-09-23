#include<stdio.h>
#include<math.h>
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
