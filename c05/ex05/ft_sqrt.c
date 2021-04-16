/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aspineli <aspineli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 02:14:14 by aspineli          #+#    #+#             */
/*   Updated: 2021/04/16 02:16:39 by aspineli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;
	int cont;

	i = 1;
	cont = 0;
	while (nb >= i)
	{
		nb -= i;
		i += 2;
		cont++;
	}
	if (nb == 0)
		return (cont);
	return (0);
}
