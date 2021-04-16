/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aspineli <aspineli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 21:45:21 by aspineli          #+#    #+#             */
/*   Updated: 2021/04/13 11:46:10 by aspineli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int not_alpha;

	i = 0;
	not_alpha = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65) && (str[i] <= 90))
			str[i] = str[i] + 32;
		if (not_alpha == 1)
		{
			if ((str[i] >= 97) && (str[i] <= 122))
				str[i] = str[i] - 32;
			not_alpha = 0;
		}
		if (!((str[i] >= 48 && str[i] <= 57) ||
				(str[i] >= 65 && str[i] <= 90) ||
					(str[i] >= 97 && str[i] <= 122)))
			not_alpha = 1;
		i++;
	}
	return (str);
}
