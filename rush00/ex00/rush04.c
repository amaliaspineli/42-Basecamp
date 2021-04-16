/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aspineli <aspineli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 21:39:45 by aspineli          #+#    #+#             */
/*   Updated: 2021/04/03 22:20:17 by aspineli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int l;
	int c;

	l = 1;
	while (l <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((l == 1 && c == 1) || (l == y && c == x && y > 2 && x > 2))
				ft_putchar('A');
			else if (((l == y) && (c == 1)) || ((l == 1) && ((c == x))))
				ft_putchar('C');
			else if ((l != 1) && (l != y) && (c != 1) && (c != x))
				ft_putchar(' ');
			else
				ft_putchar('B');
			c++;
		}
		ft_putchar('\n');
		l++;
	}
}
