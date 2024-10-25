/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numcheck.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:57:42 by julcalde          #+#    #+#             */
/*   Updated: 2024/10/25 19:23:28 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_p(size_t p, int *count)
{
	
}

void	ft_d_i(int n, int *count)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*count += 11;
		return ;
	}
	else if (n < 0)
	{
		ft_c('-', 1);
		n *= 1;
		ft_n(n, *count);
	}
	else if (n >= 10)
		ft_n(n / 10, *count);
	ft_c(n % 10 + '0', *count);
}

void	ft_u(unsigned int u, int *count)
{
	
}

void	ft_lx_ux(unsigned int x, int *count, char lx_ux)
{
	
}
