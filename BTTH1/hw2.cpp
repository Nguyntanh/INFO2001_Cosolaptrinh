#include <stdio.h>
int main(){
	int a=7, b=8;
	a++;
	a=a+b--;
	--b;
	a--;
	a=(--a)+(--b);
	if(a%2!=0)
	printf("\n a la so le");
	else {
		printf("\n a la so chan");
		printf("\n a=%d",a);
	}
	return 0;
}
