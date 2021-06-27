/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrmart's group  <marvin@42.fr            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 09:28:24 by andrmart's group  #+#    #+#             */
/*   Updated: 2021/06/27 14:31:40 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_checkpost_and_putchar(int c, int r, int i, int j)
{
	if (j == 0 && i == 0)
		ft_putchar('A');
	else if (j == c - 1 && i == 0)
		ft_putchar('C');
	else if (j == 0 && i == r - 1)
		ft_putchar('C');
	else if (j == c - 1 && i == r - 1)
		ft_putchar('A');
	else if (i == 0)
		ft_putchar('B');
	else if (i == r - 1)
		ft_putchar('B');
	else if (j == 0)
		ft_putchar('B');
	else if (j == c - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int c, int r)
{
	int	i;
	int	j;

	i = 0;
	while (i < r)
	{
		j = 0;
		while (j < c)
		{
			ft_checkpost_and_putchar(c, r, i, j);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
