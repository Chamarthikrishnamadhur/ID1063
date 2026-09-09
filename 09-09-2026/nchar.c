//Madhur
//coded on 09-09-2026
#include<stdio.h>
#include<stdlib.h>
#define len 43 //max string length

//main function
int main(){
	int n;
	char d;
	//char a[len];
	printf("Enter n");
	scanf("%d",&n);
	d=getchar();
	char *a = malloc((n+ 1) * sizeof(d));//https://github.com/gadepall/cprog-25-07-25/blob/main/main.pdf page no 20
	printf("Enter the string");
	scanf("%[^\n]",a);
	a[n]='\0';
	printf("%s",a);
}

