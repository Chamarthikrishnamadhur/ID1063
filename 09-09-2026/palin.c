//Madhur 09-09-2026
#include<stdio.h>
#define lt 43
//function to check palindrome
int palindrome(char *a){
	//checking length
	int len=0;
	for (int i=0;i<lt;i++){
		//printf("%c",a[i]);
		if (a[i]!='\0'){
		len++;
		}
	}
	len=len-1;
	//printf("%d\n",len);
	for (int i=0;i<=len;i++){
		if(a[i]!=a[len-i]){
			printf("Not a plaindrome\n");
			return 0;
		}
	}

	printf("Palindrome\n");
	return 0;
}
int main(void){
	//taking input
	char a[lt];
	int b;
	for(int i=0;i<lt;i++){
		a[i]='\0';
	}
	printf("Enter the name:");
	scanf("%[^\n]",a);
	b=palindrome(a);
}
