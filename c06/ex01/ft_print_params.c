/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aspineli <aspineli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:57:04 by aspineli          #+#    #+#             */
/*   Updated: 2021/04/16 19:43:09 by aspineli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*a;
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		a = argv[i];
		while (a[j] != '\0')
		{
			write(1, &a[j], 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}
