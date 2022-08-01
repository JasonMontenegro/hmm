/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogziri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:36:23 by ogziri            #+#    #+#             */
/*   Updated: 2022/07/28 04:14:00 by ogziri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;	
	int	f;

	i = 0;
	while (i < (size / 2))
	{
		f = tab[i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = f;
		i++;
	}
}