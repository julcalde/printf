/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numcheck.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:57:42 by julcalde          #+#    #+#             */
/*   Updated: 2024/10/26 14:53:05 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_p(size_t p, int *count)
{
	char	chars[30];
	int		i;
	char	*b16;

	b16 = "0123456789abcdef";
	i = 0;
	write(1, "0x", 2);
	(*count) += 2;
	if (p == 0)
	{
		ft_c('0', count);
		return ;
	}
	while (p != 0)
	{
		chars[i] = b16[p % 16];
		p /= 16;
		i++;
	}
	while (i--)
		ft_c(chars[i], count);
}

void	ft_d_i(int n, int *count)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 12);
		(*count) += 12;
		return ;
	}
	else if (n < 0)
	{
		ft_c('-', count);
		n *= -1;
		ft_d_i(n, count);
	}
	else
	{
		if (n > 9)
			ft_d_i(n / 10, count);
		ft_c(n % 10 + '0', count);
	}
}

void	ft_u(unsigned int u, int *count)
{
	if (u >= 10)
		ft_u(u / 10, count);
	ft_c(u % 10 + '0', count);
}

void	ft_lx_ux(unsigned int x, int *count, char lx_ux)
{
	char	chars[30];
	int		i;
	char	*b16;

	if (lx_ux == 'x')
		b16 = "0123456789abcdef";
	else if (lx_ux == 'X')
		b16 = "0123456789ABCDEF";
	i = 0;
	if (x == 0)
	{
		ft_c('0', count);
		return ;
	}
	while (x != 0)
	{
		chars[i] = b16[x % 16];
		x /= 16;
		i++;
	}
	while (i--)
		ft_c(chars[i], count);
}
