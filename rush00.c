/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcarbone <jcarbone@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:34:17 by jcarbone          #+#    #+#             */
/*   Updated: 2021/06/26 19:34:20 by jcarbone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar( char c);

void	rush00(int x, int y)
{
	int	i;
	int	j;
	int	z;

	z = x > 1 && y > 1;
	i = 0;
	while (i++ < y - 1)
	{
		j = 0;
		while (j++ < x - 1)
		{
			if ((i == 0 && j == 0) || (i == y - 1 && j == x - 1 && z))
				ft_putchar('/');
			else if ((i == y - 1 && j == 0) || (i == 0 && j == x - 1))
				ft_putchar('\\');
			else if (i == 0 || j == 0 || i == y - 1 || j == x - 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
