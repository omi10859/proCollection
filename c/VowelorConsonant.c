#include <stdio.h>

int main(){
	char ch;
	printf("Enter a character: ");
	scanf("%c", &ch);
	char arr[]= {'a', 'e','i','o','u','A','E','I','O','U'};	
	for( int i=0; i<15; i++){
		if (arr[i]==ch){
			printf("Your input character %c is a Vowel", ch);
		}
		else{
			printf("Its a Consonant");
			break;
		}
	}
	return 0;
}
