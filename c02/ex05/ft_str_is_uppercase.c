/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aspineli <aspineli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 21:14:00 by aspineli          #+#    #+#             */
/*   Updated: 2021/04/13 18:06:26 by aspineli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int i;
	int uppercase;

	uppercase = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] > 64 && str[i] < 91))
		{
			uppercase = 0;
			break ;
		}
		i++;
	}
	return (uppercase);
}
