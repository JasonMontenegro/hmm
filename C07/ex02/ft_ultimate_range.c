/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogziri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 01:24:49 by ogziri            #+#    #+#             */
/*   Updated: 2022/08/12 01:24:59 by ogziri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*ptr;

	i = 0;
	ptr = NULL;
	if (max <= min)
		return (0);
	ptr = (int *)malloc(sizeof(int) * (max - min));
	if (ptr == NULL)
		return (-1);
	while (min < max)
	{
		*(ptr + i) = min;
		min++;
		i++;
	}
	*range = ptr;
	return (i);
}
