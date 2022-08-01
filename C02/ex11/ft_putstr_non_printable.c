/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogziri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:49:02 by ogziri            #+#    #+#             */
/*   Updated: 2022/08/01 15:51:58 by ogziri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hex(unsigned char str)
{
	unsigned char	*hex;

	ft_putchar('\\');
	hex = "0123456789abcdef";
	ft_putchar(hex[str / 16]);
	ft_putchar(hex[str % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32) && (str[i] <= 126))
			ft_putchar(str[i]);
		else
			ft_hex(str[i]);
		i++;
	}
}
