#include<stdio.h>
#include<conio.h>
void main(){
	int n;
	int i=1;
	clrscr();
	printf("Enter a Number: ");
	scanf("%d",&n);
	while(i<=n){
		printf("%d\n",i);
		i++;
	}
	getch();
}