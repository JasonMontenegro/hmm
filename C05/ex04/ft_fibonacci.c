/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogziri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 19:11:23 by ogziri            #+#    #+#             */
/*   Updated: 2022/08/09 00:28:33 by ogziri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int i)
{
	if (i == 0)
		return (0);
	else if (i == 1)
		return (1);
	else if (i < 0)
		return (-1);
	else
		return (ft_fibonacci(i - 1) + ft_fibonacci(i - 2));
}
