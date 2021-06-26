#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush00(int row, int column)
{
	int	i;

	i = 0;
	while (i < column)
	{
		int	j;
		while (j < row)
		{
			if (i == 0 || i == column - 1)
			{
				ft_putchar('*');
			}
			else
			{
				if (j == 0 || j == row -1)
				{
					ft_putchar('!');
				}
				else
				{
					ft_putchar(' ');
				}
			}
			ft_putchar('\n');
			j++;
		}
		i++;
	}
}

//comment main when done

int	main(void)
{
	rush00(5, 4);
	return (0);
}
