#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void uniform(char *str, int len)
{
int i;
FILE *fp;

fp = fopen(str,"w");
//Generate numbers
for (i = 0; i < len; i++)
{
fprintf(fp,"%lf\n",(double)(rand()%100+1));
}
fclose(fp);

}


int binaryVector(int n)
{
    double x;

    // Generate n random numbers using uniform() function
    uniform("binary.dat", n);

    FILE *fp = fopen("binary.dat", "r");

    // Convert the random numbers into 0 or 1
    for (int i = 0; i < n; i++)
    {
        fscanf(fp, "%lf", &x);

        return (int)x;
    }
    //printf("\n");

    
    fclose(fp);
}

int main(){
	srand(time(NULL));
	printf("Enter n ");
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
	a[i]=binaryVector(1);
	}
	int min=100;
	for(int i=0;i<n;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("%d\n",min);
	for(int i=0;i<n;i++){
		if(a[i]==min){
			a[i]=0;
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
		}
	printf("\n");
}
