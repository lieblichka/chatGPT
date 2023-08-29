#include <stdio.h>

int main()
{
	int		i = 0, len = 0, pol = 1;
	char	str[100];

	printf("Введите строку: ");
	if (scanf("%s", str) != 1)
	{
		printf("Ошибка при вводе строки.\n");
		return 1;
	}

	while (str[len] != '\0')
		len++;

	printf("first section was valid\n");	
	while (i < len)
	{
		len--;
		if (str[i] != str[len])
			pol = 0;
		i++;	
	}
	if (pol)
		printf("Строка является полиндромом.\n");
	else 
		printf("Строка не является полиндромом.\n");
		
	return 0;
}
