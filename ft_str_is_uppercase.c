#include <unistd.h>
#include <stdio.h>

int		ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main()
{
	int output;
	
	output = ft_str_is_uppercase("ASDF");
	printf("%d\n", output);

	output = ft_str_is_uppercase("1234");
	printf("%d\n", output);

	output = ft_str_is_uppercase("");
	printf("%d\n", output);
}
