/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:13:47 by julcalde          #+#    #+#             */
/*   Updated: 2024/10/22 17:10:25 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/* Here are the requirements:
• Don’t implement the buffer management of the original printf().
• Your function has to handle the following conversions: cspdiuxX%
*/

int	ft_printf(const char *format, ...)
{
	int	i;

	i = 0;
	if (format != NULL)
	{
		while (format[i] != '\0')
		if(format[i] == '%' && format[i + 1] != '%')
		{
			//check if next index asks for format specifier
		}
	}
	return (0);
}
