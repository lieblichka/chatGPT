#include <stdio.h>

int main()
{
	int		i = 0;
	char	str[100];

	printf("Введите строку: ");
	if (scanf(" %99s", str) != 1)
	{
		printf("Ошибка при вводе строки.\n");
		return 1;
	}
	while (str[i] != '\0')
		printf("%c\n", str[i++]);
	return 0;
}
