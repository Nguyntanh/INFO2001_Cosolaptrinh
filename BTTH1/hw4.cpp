#include <stdio.h>
int main(){
	int a, b, max, min;
	printf("nhap hai so a va b:");
	scanf("%d %d", &a, &b);
	max=a, min=b;
	if(a>b)
	printf("max=%d",a);
	else if(a<b)
	printf("max=%d", b);
	else if(a==b)
	printf("max=%d", a=b);
	return 0;
} 
