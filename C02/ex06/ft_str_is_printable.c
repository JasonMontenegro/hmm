/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogziri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 18:54:49 by ogziri            #+#    #+#             */
/*   Updated: 2022/07/31 19:03:53 by ogziri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < ' ' || *str == 127)
			return (0);
		str++;
	}
	return (1);
}
