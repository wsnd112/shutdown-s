#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
while(1)
{
	printf("���Խ���һ���Ӻ�ػ������롮������ȡ���ػ�\n�����룺");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
		break;
	}
}
	
	return 0;
}