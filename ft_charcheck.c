/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charcheck.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:53:05 by julcalde          #+#    #+#             */
/*   Updated: 2024/10/25 19:05:19 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_c(char c, int *count)
{
	write (1, &c, 1);
	*count++;
}

void	ft_s(char *args, int *count)
{
	int	i;

	i = 0;
	if (!args)
	{
		write (1, "null", 6);
		count += 6;
		return ;
	}
	while (args[i] != '\0')
	{
		ft_c(args[i], count);
		i++;
	}
}
