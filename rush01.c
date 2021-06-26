/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcllobet <jcllobet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 19:34:17 by jcarbone          #+#    #+#             */
/*   Updated: 2021/06/26 21:45:21 by jcllobet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar( char c);

void	rush00(int x, int y)
{
	int	i;
	int	j;
	int z;

	i = -1;
	while (i++ < y - 1)
	{
		j = -1;
		while (j++ < x - 1)
		{
			z = (i > 0 && j > 0) || (i < y - 1 && j < x - 1);
			if ((i == 0 && j == 0 && z) || (i == y - 1 && j == x - 1 && z))
				ft_putchar('/');
			else if ((i == 0 && j == x - 1) || (i == y - 1 && j == 0 && z))
				ft_putchar('\\');
			else if (i == 0 || j == 0 || i == y - 1 || j == x - 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
