#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
int strlength(char* string) {
	int len = 1;
	if (*(string + 1) == '\0')
		return len;
	len += strlength(string + 1);
	return len;
}
int isPelin(char* string) {
	int len = strlength(string);
	char* cpy = string;//수정 가능한 문자열 복사
	int T = 0;
	if (!(len % 2))return 0;//짝수조건 처리

	if (len == 1)return 1;//기본 케이스
	if (*cpy == *(cpy + len - 1))T = 1;//양끝 확인
	
	*(cpy + len - 1) = '\0';
	if (T && isPelin(++cpy))return 1;
	else return 0;//양끝과 나머지 문자열이 pelindrum이면 true 출력
}