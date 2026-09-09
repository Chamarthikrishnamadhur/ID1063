#include <stdio.h>// Madhur 09-09-2026function to swap 2 letters
void swap(char *a){
	char temp='i';
	temp=a[0];
	a[0]=a[1];
	a[1]=temp;
}
int main(){//taking input
	char a[43];
	printf("Enter word\n");
	scanf("%[^\n]",a);
	char temp='l';
	temp=a[0];
	a[0]=a[1];
	a[1]=temp;
	printf("%s",a);
}
