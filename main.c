#include<stdio.h>
int strlength(char* string);
int isPelin(char* string);
int main(void) {
	char str[10] = "34543";
	printf("%d\n", strlength(str));
	printf("%d", isPelin(str));
}