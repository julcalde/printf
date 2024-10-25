/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:48:26 by julcalde          #+#    #+#             */
/*   Updated: 2024/10/25 15:27:09 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include "libft.h"

int		ft_printf(const char *format, ...);
void	ft_c(char c);
void	ft_s(char *s);
void	ft_p(size_t p);
void	ft_d_i(int n);
void	ft_u(unsigned int u);
void	ft_lx_ux(unsigned int x);

#endif