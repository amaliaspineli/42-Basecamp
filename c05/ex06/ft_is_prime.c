/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aspineli <aspineli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 02:29:56 by aspineli          #+#    #+#             */
/*   Updated: 2021/04/16 03:13:57 by aspineli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int n)
{
	int i;
	int cont;

	i = 1;
	cont = 0;
	while (n >= i)
	{
		n -= i;
		i += 2;
		cont++;
	}
	return (cont);
}

int	ft_is_prime(int nb)
{
	int i;
	int op;

	if (nb <= 1)
		return (0);
	i = ft_sqrt(nb);
	op = 2;
	while (op <= i)
	{
		while ((nb % op == 0))
		{
			return (0);
		}
		op++;
	}
	return (1);
}
