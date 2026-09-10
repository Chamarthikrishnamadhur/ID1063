#include<stdio.h>
#include<math.h>
double raph(double x){
	return (x-((exp(x)-2)/(exp(x))));
}
int main(){
	double x=1;
	for (int i=0;i<20;i++){
		printf("%lf\n",x);
		x=raph(x);
	}
	printf("Newton raphson gave %lf\n",x)
}
