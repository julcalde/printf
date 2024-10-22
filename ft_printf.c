/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:13:47 by julcalde          #+#    #+#             */
/*   Updated: 2024/10/22 19:54:00 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/* Here are the requirements:
• Don’t implement the buffer management of the original printf().
• Your function has to handle the following conversions: cspdiuxX%
*/
int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int	i;

	while (*s)
		i++;
	return (i);
}

int	ft_putnbr(int n)
{
	int	count;

	count = 0;
	// if (n == -2147483648)
	// {
	// 	return ;
	// }
	if (n < 0)
	{
		count += ft_putchar('-');
		n *= -1;
	}
	if (n >= 10)
		count += ft_putnbr(n / 10);
	count += ft_putchar(n % 10) + '0';
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		char_count;

	va_start(args, format);
	i = 0;
	char_count = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 's')
			{
				const char	*s;
				s = va_arg(args, const char *);
				char_count += ft_putstr(s);
			}
			if (format[i] == 'i')
			{
				int	num;
				num = va_arg(args, int);
				char_count += ft_putnbr(num);
			}
		}
		else
			char_count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (0);
}
