#include<stdio.h>
#include<windows.h>
#include<assert.h>

char *my_strstr(const char *arr1, const char *arr2)
{
	assert(arr1&&arr2);
	while (*arr1)
	{
		char *arr1_son = arr1;
		char *arr2_son = arr2;
		while (*arr1_son == *arr2_son)
		{
			if (*arr1_son == '\0')
			{
				return arr1;
			}
			arr1_son++;
			arr2_son++;
		}
		if (*arr2_son == '\0')
		{
			return arr1;
		}
		arr1++;
		if (*arr1 == '\0')
		{
			return NULL;
		}
	}
}

int main()
{
	char * flag = NULL;
	char  arr1[] = "abcddeefgh";
	char  arr2[] = "de";
	flag = my_strstr(arr1, arr2);
	if (flag != NULL)
	{
		puts(flag);
	}
	else
	{
		printf("’“≤ªµΩ\n");
	}
	system("pause");
	return 0;
}