#include<stdio.h>
int f(int a,int b,int c,int d){
	return (!b&&!d||c&&a&&!b||c&&!d);
}
int main(){
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			for(int k=0;k<2;k++){
				for(int l=0;l<2;l++){
					printf("\n%d %d %d %d :: %d",i,j,k,l,f(i,j,k,l));
				}
			}
		}

	}
}
