/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:55:34 by julcalde          #+#    #+#             */
/*   Updated: 2024/10/25 21:02:44 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

int		ft_printf(const char *user_input, ...);
void	ft_c(char c, int *count);
void	ft_s(char *args, int *count);
void	ft_p(size_t p, int *count);
void	ft_d_i(int n, int *count);
void	ft_u(unsigned int u, int *count);
void	ft_lx_ux(unsigned int x, int *count, char lx_ux);

#endif