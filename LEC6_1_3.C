#include<stdio.h>
#include<conio.h>
void main(){
	int n;
	int i=2;
	clrscr();
	printf("Enter any number: ");
	scanf("%d",&n);
	while(n>=i){
		printf("%d\n",i);
		i+=2;
	}
	getch();
}