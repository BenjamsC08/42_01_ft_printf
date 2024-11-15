/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_printf.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benjamsc <benjamsc@email.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:30:24 by benjamsc          #+#    #+#             */
/*   Updated: 2024/11/14 12:25:53 by benjamsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_PRINTF_H
# define LIB_PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int ft_strlen(char *str);
char	*ft_itoa(int n);
char	*ft_utoa(unsigned int n);

int ft_put_char_int(char c);
int ft_put_str_int(char *str);

int ft_put_nbr_int(int nbr);
int ft_put_uint_int(unsigned int nb);



int     ft_printf(const char *str, ...);



#endif
