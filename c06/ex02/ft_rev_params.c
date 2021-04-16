/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aspineli <aspineli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 17:05:31 by aspineli          #+#    #+#             */
/*   Updated: 2021/04/16 19:43:23 by aspineli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*a;
	int		i;
	int		j;

	i = argc - 1;
	while (i > 0)
	{
		a = argv[i];
		j = 0;
		while (a[j] != '\0')
		{
			write(1, &a[j], 1);
			j++;
		}
		i--;
		write(1, "\n", 1);
	}
}
