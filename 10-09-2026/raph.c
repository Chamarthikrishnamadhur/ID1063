#include<stdio.h>
#include<math.h>
//Function to give raphson
double raph(double x){
	return (x-((exp(x)-2)/(exp(x))));
}
int main(){
	double x=1;
	//Newton raphson iteration
	for (int i=0;i<50;i++){
		printf("%lf\n",x);
		x=raph(x);
	}
	printf("Newton raphson gave %lf\n",x);
}
