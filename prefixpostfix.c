#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int preToPostFix(char* preFixIn, char* postFix)
// return value: length of converted expression 
{ 
	char op[2];
	int p = 0;

	if (strchr("+-*/", preFixIn[0]) == NULL) {
		postFix[0] = preFixIn[0];
		postFix[1] = '\0';
		return 1;
	}
	op[0] = preFixIn[p++];
	op[1] = '\0';
	p += preToPostFix(preFixIn + p, postFix);
	p += preToPostFix(preFixIn + p, postFix + strlen(postFix));
	strcat(postFix, op);

	return strlen(postFix);
} // preToPostFix
