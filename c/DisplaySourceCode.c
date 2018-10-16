#include <stdio.h>
int main(){
	int c;
	FILE *fp;
	fp=fopen("DisplaySourceCode.c", "r");  //__FILE__ contain location of this file in string
	do{
		c=getc(fp);
		putchar(c);
	}
	while(c != EOF);
	fclose(fp);
	return 0;
}
