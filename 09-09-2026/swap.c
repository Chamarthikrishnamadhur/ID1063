#include <stdio.h>
int main(){
	char a[43];
	scanf("%42s",a);
	char temp='l';
	temp=a[0];
	a[0]=a[1];
	a[1]=temp;
	printf("%s",a);
}
