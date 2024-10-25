/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:13:47 by julcalde          #+#    #+#             */
/*   Updated: 2024/10/25 20:56:28 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Here are the requirements:
• Don’t implement the buffer management of the original printf().
• Your function has to handle the following conversions: cspdiuxX%
*/

static void	format_check(char specifier, va_list *args, int *char_count, int *i)
{
	if (specifier == 'c')
		ft_c(va_arg(*args, int), char_count);
	else if (specifier == 's')
		ft_s(va_arg(*args, char *), char_count);
	else if (specifier == 'p')
		ft_p(va_arg(*args, size_t), char_count);
	else if (specifier == 'd' || specifier == 'i')
		ft_d_i(va_arg(*args, int), char_count);
	else if (specifier == 'u')
		ft_u(va_arg(*args, unsigned int), char_count);
	else if (specifier == 'x')
		ft_lx_ux(va_arg(*args, unsigned int), char_count, 'x');
	else if (specifier == 'X')
		ft_lx_ux(va_arg(*args, unsigned int), char_count, 'X');
	else if (specifier == '%')
		ft_c('%', char_count);
	else
		(*i)--;
}

int	ft_printf(const char *user_input, ...)
{
	va_list	args;
	int		i;
	int		char_count;

	va_start(args, user_input);
	i = 0;
	char_count = 0;
	while (user_input[i] != '\0')
	{
		if (user_input[i] == '%')
		{
			i++;
			format_check(user_input[i], &args, &char_count, &i);
			i++;
		}
		else
		{
			ft_c((char) user_input[i], &char_count);
			i++;
		}
	}
	va_end(args);
	return (0);
}
