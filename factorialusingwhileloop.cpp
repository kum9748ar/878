//To Find facorial of a number using for loop
#include <stdio.h>
int main(){
	int f=1 ,i=1,n;
	printf("Enter a number");
	scanf("%d",&n);
while(i<=n){
	f*=i;
	i++;
}
	printf("The factorial of %d is %d" ,n,f);
	return 0;
}
