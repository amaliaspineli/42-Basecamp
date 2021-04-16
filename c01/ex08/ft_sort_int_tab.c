/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aspineli <aspineli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 13:43:36 by aspineli          #+#    #+#             */
/*   Updated: 2021/04/07 15:34:36 by aspineli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	while (*(tab + i) != '\0')
	{
		j = i + 1;
		while (j < size)
		{
			if (*(tab + i) > *(tab + j))
				ft_swap(tab + i, tab + j);
			j++;
		}
		i++;
	}
}
