#include <unistd.h>
#include <stdio.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	x;
	x = 0;
	while(str[x] != '\0')
	{
		print(str[x]);
		x++;;
	}
}

int	main(void)
{
	char mystring[] = "My First String";
	ft_putstr(mystring);
}
//	printf("%s", mystring);
