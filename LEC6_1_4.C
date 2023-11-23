#include<stdio.h>
#include<conio.h>
void main(){
	int n;
	int i=1;
	clrscr();
	printf("Enter a Number: ");
	scanf("%d",&n);
	while(n>=i){
		if(n%2==1){
			printf("%d\n",n);
		}
		n--;
	}
	getch();
}