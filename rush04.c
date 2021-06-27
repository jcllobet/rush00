/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcllobet <jcllobet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 09:28:24 by andrmart's        #+#    #+#             */
/*   Updated: 2021/06/27 15:39:55 by jcllobet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x);

void	ft_checkpost_and_putchar(int x, int y, int i, int j)
{
	if (j == 0 && i == 0)
		ft_putchar('A');
	else if (j == x - 1 && i == 0)
		ft_putchar('C');
	else if (j == 0 && i == y - 1)
		ft_putchar('C');
	else if (j == x - 1 && i == y - 1)
		ft_putchar('A');
	else if (i == 0)
		ft_putchar('B');
	else if (i == y - 1)
		ft_putchar('B');
	else if (j == 0)
		ft_putchar('B');
	else if (j == x - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			ft_checkpost_and_putchar(x, y, i, j);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
