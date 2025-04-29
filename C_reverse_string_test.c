#include<stdio.h>


void main () {
	char a;
	printf("Alphabets in ascending order");
	for(a='A';a<='J';a++) {
		printf("%c\n", a);
	}
	
	for(a='Z';a>='A';a--) {
	printf("%c\n", a);
	}
	
}
