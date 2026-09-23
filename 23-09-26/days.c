#include<stdio.h>
int daysElapsed(){
	int month;
	printf("Give month: ");
	scanf("%d",&month);
	int day;
	printf("\nGive day: ");
	scanf("%d",&day);
	switch(month){
		case 12:
			 day+=0;
		case 11:
			 day+=31;
		case 10:
			 day+=30;
		case 9:
			 day+=31;
		case 8:
			 day+=30;
		case 7:
			day+=31;
		case 6:
			day+=30;
		case 5:
			day+=31;
		case 4:
			day+=30;
		case 3:
			day+= 31;
		case 2: 
			day+= 28;
		case 1:
			day+=0;
	}
			
	return day;
}
int main(){
int a=daysElapsed();
printf("%d",a);

}
