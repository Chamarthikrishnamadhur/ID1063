#include<stdio.h>
double calculateArea(double l,double b){
	return (l*b);
}
int main(){
	double len=0;
	double width=0;
	printf("Enter length");
	scanf("%lf",&len);
	printf("\n enter breadth");
	scanf("%lf",&width);
	double area= calculateArea(len,width);
	printf("\nThe aera is : %lf \n",area);
}
