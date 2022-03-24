#include<stdio.h>
main(){
	int n;
	int fact1=1;
	int fact2=1;
	printf("\nEnter an integer");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		fact1=fact1*i;
	}
	for(int i=n;i>=1;i--){
		fact2=fact2*i;
	}
	printf("\nfact1=%d\nfact2=%d",fact1,fact2);
}
