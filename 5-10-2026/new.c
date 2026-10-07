//Code by madhur 
////on 05-10-2026
#include<stdio.h>
int x(int a, int b,int c){
	return a&&b||b&&c||c&&a;
}
int main(){
	int a=0;
	int b=0;
	int c=0;
	printf("a  b  c\n");
	for(int i=0;i<8;i++){
		if(0<i<4){
		a=0;}
		else{a=1;
		}
			
		printf("%d %d %d %d",a,b,c,x)
	}
}
