#include <stdio.h>

int	ft_str_numeric(char *str)
{
	int	i;
	i = 0;

	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

int main()
{
	char chaine[] = "1234";
	char pas[] = "azert232";
	printf("%d\n", ft_str_numeric(chaine));
	printf("%d\n", ft_str_numeric(pas));
}
