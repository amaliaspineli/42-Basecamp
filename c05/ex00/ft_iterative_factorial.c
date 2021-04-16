/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aspineli <aspineli@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 18:18:53 by aspineli          #+#    #+#             */
/*   Updated: 2021/04/15 18:38:59 by aspineli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int r;

	r = 1;
	if (nb >= 0)
	{
		while (nb > 0)
		{
			r *= nb;
			nb--;
		}
		return (r);
	}
	return (0);
}
