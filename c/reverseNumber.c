#include <stdio.h>

int main()
{
	int x;
	printf("Enter a Number you want to reverse: \n ");
	scanf("%d", &x );
	while(x){
		int y;
		y = x%10;
		printf("%d", y);
		x /=10;
	}
	return 0;
}
