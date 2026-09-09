//code by madhur 09-09-2026
#include<stdio.h>
//function to check occurence
int occur(char *a, char *b){
	int k=0;
	for(int i=0;i<43;i++){
                  if(a[i]==b[0]){
                          break;
                  }
                  k+=1;          
	}
	return k;//occurence-1 list index
}
int main(){
	//storing in arrays
	char a[43],b[4];
// Taking input for word and character
	printf("Enter word:");
	scanf("%[^\n]",a);
	printf("\n Enter char");
	scanf("%2s",b);
	//printf("%c\n",b[0]);
	//counting occurences 
	/*int k=0;
	for(int i=0;i<43;i++){
		if(a[i]==b[0]){
			break;
		}
		k+=1;
	}*/
	//printing occurence
	printf(" first Occurence :%d\n",occur(a,b)+1);//K+1 because string index starts at zero 
}
