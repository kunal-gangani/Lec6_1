#include<stdio.h>
#include<conio.h>
main(){
	int a=2000;
	int n;
	clrscr();
	printf("enter years :- ");
	scanf("%d",&n);
	
	while(a<=n){
		
		if(a%4==0){
			
			printf("%d\t",a);
		}
		a++;
	}
	getch();
}
