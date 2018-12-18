#include "stdio.h"
#include"string.h"
#include "stdlib.h"
int main()
{
	void swap(char *, char *);
	char a[20], b[31], c[20];
	gets(a);
	gets(b);
	gets(c);
	if (strcmp(a, b) > 0) swap(a, b);
	if (strcmp(a, c) > 0) swap(a, c);
	if (strcmp(b, c) > 0) swap(b, c);
	printf("%s\n%s\n%s\n", a, b, c);
	system("pause");
	return 0;
}
void swap(char *x, char *y) {
	char temp[20];
	strcpy(temp, x);
	strcpy(x, y);
	strcpy(y,temp);
}
