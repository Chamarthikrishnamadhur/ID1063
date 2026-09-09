//code by madhur 09-09-2026
#include<stdio.h>
#define length 43 //max name length
//function to check occurence
int occur(char *a, char b){
	int k=0;
	for(int i=0;i<length;i++){
                  if(a[i]==b){
                          return k;
                  }
                  k+=1;          
	}
	//occurence-1 list index
	return -2;
}
int main(){
	//storing in arrays
	char a[length];
	char b='i';
	char c;
// Taking input for word and character
	printf("Enter word:");
	scanf("%[^\n]",a);
	c=getchar();
	printf("\n Enter char");
	scanf("%c",&b);
	c=getchar();
	printf("%c\n",b);
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
