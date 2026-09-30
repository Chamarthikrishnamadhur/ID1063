#include<stdio.h>
#include<stdlib.h>
//creating	
double **createMat(int m,int n)
{
 int i;
 double **a;
 
 //Allocate memory to the pointer
a = (double **)malloc(m * sizeof( *a));
    for (i=0; i<m; i++)
         a[i] = (double *)malloc(n * sizeof( *a[i]));

 return a;
}

//multiplying
double **Matmul(double **a, double **b, int m, int n, int p)
{
int i, j, k;
double **c, temp =0;
c = createMat(m,p);

 for(i=0;i<m;i++)
 {
  for(k=0;k<p;k++)
  {
    for(j=0;j<n;j++)
    {
	temp= temp+a[i][j]*b[j][k];
    }
	c[i][k]=temp;
	temp = 0;
  }
 }
return c;

}
int main(){
	printf("Enter no of rows of a ");
	int r1,r2,c1,c2;
	scanf("%d",&r1);
	printf("\n enter columns of a ");
	scanf("%d",&c1);
	r2=c1;
	double **A=createMat(r1,c1);
	printf("Enter the values of A\n");
	for(int i=0;i<r1;i++){
		for(int j=0;j<c1;j++){
			scanf("%lf",&A[i][j]);

		}
	}
	printf("Enter the columns of B ");
	scanf("%d",&c2);
	double ** B=createMat(r2,c2);
	printf("\nEnter B \n");
	for(int i=0;i<r2;i++){
		for(int j=0;j<c2;j++){
			scanf("%lf",&B[i][j]);
		}
	}
	double** C=createMat(r1,c2);
	C=Matmul(A,B,r1,r2,c2);
for(int i=0;i<r1;i++){
	for(int j=0;j<c2;j++){
		printf("%lf ",C[i][j]);
	}
	printf("\n");
}
}
