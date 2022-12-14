/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogziri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 10:07:20 by ogziri            #+#    #+#             */
/*   Updated: 2022/08/08 16:12:34 by ogziri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	f;

	f = 1;
	while (nb > 0)
	{
		f *= nb;
		--nb;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (f);
}
