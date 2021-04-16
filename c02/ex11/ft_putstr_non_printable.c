/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aspineli <aspineli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 14:51:42 by aspineli          #+#    #+#             */
/*   Updated: 2021/04/13 23:15:31 by aspineli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hexadecimal(unsigned char c)
{
	char	*hexadecimal;
	int		div;
	int		mod;

	hexadecimal = "0123456789abcdef";
	div = c / 16;
	mod = c % 16;
	write(1, "\\", 1);
	write(1, &hexadecimal[div], 1);
	write(1, &hexadecimal[mod], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
			ft_print_hexadecimal(*(unsigned char *)(str + i));
		i++;
	}
}
