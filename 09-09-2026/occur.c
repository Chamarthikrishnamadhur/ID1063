#include<stdio.h>
int main(){
	char a[43],b[4];
	printf("Enter word:");
	scanf("%42s",a);
	printf("\n Enter char");
	scanf("%2s",b);
	printf("%c\n",b[0]);
	int k=0;
	for(int i=0;i<43;i++){
		if(a[i]==b[0]){
			k+=1;
		}
	}
	printf("%d\n",k);
}
