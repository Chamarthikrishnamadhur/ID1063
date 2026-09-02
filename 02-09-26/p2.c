#include<stdio.h>
#include<stdlib.h>
#include"libs/matfun.h"
#include<math.h>
int main(){
	int q;
	scanf("%d",&q);

	printf("\n");
	double **a=createMat(q,1);
	double **b=createMat(q,1);
	double **c=createMat(1,1);
	a=loadMat("a.dat",q,1);
	printMat(a,q,1);
	b=loadMat("b.dat",q,1);
	
	
	printMat(b,q,1);
	 c=Matmul(transposeMat(a,q,1),b,1,q,1);
	printMat(c,1,1);

}
