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
	char* cpy = string;//���� ������ ���ڿ� ����
	int T = 0;
	if (!(len % 2))return 0;//¦������ ó��

	if (len == 1)return 1;//�⺻ ���̽�
	if (*cpy == *(cpy + len - 1))T = 1;//�糡 Ȯ��
	
	*(cpy + len - 1) = '\0';
	if (T && isPelin(++cpy))return 1;
	else return 0;//�糡�� ������ ���ڿ��� pelindrum�̸� true ���
}