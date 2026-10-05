//w.c.p to find the sum of digits of a whole number//
#include<stdio.h>
int main(){
	int n,digit,sum;
	printf("Enter the number: ");
	scanf("%d",&n);
	while(n!=0){
		digit=n%10;
		sum=digit+sum;
		n=n/10;
	}
	printf("The sum of the digit is: %d",sum);
	return 0;
}