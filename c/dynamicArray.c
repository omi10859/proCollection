#import <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int *arry, j=0;
	arry=(int *) malloc(0);
	printf("Enter array elements \n");
	int count = 1;
	while(1){
		fflush(stdin);
		char str[10];
		fgets(str, 10, stdin);
		if(strlen(str) <2)
		    break;
	  arry[count] = atoi(str);

		count++;
	  arry=(int *) realloc(arry, count);
	}
	printf("Array elements are:\n");
	for(int i=1;i<count;i++){
			printf("%d \n", arry[i]);
	}
	return 0;
}
