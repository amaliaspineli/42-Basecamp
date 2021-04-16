/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aspineli <aspineli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 03:23:02 by aspineli          #+#    #+#             */
/*   Updated: 2021/04/16 19:42:40 by aspineli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	*a;

	i = 0;
	argc = 0;
	a = argv[argc];
	while (a[i] != '\0')
	{
		write(1, &a[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
