#include <stdio.h>
#include <string.h>


void palin(char* arr, int len);

int main(void)
{
	char ary[30];
	int leng;

	scanf("%s", ary);
	leng = strlen(ary);
	palin(ary, leng);
	return 0;

	

}

void palin(char* arr, int len)
{
	int i;
	int j = len - 1;
	for (i = 0; i < len / 2; i++)
	{
		if (arr[i] != arr[j])
		{
			printf("this word is not palindrome!");
			return;
		}
		j--;
	}
	printf("this word is palindrome!");

	return;
}
