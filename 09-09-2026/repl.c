#include<stdio.h>
#include<stdlib.h>
void swap(char*a,char x, char y,int lgt){
	for(int i=0;i<lgt;i++){
		if (a[i]==x){
			a[i]=y;
		}
	}
	printf("%s",a);
}
//main function
int main (){
	int n;
	char d,e,f;
	printf("Enter The length ");
	scanf("%d",&n);
	f=getchar();
	char * a=malloc((n+1)*sizeof(d));
	printf("Enter the string ");
	scanf("%[^\n]",a);
	f=getchar();
	printf("Enter (x) ");
	scanf("%c",&d);
	f=getchar();
	printf("Enter y");
	scanf("%c",&e);
	swap(a,d,e,n);

}
