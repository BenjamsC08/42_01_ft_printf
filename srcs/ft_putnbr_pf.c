/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benjamsc <benjamsc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 00:55:06 by benjamsc          #+#    #+#             */
/*   Updated: 2024/11/17 01:03:10 by benjamsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_printf.h"

int	ft_put_nbr_int(int nb)
{
	char	*s;
	char	*s1;
	int		len;

	s1 = ft_itoa(nb);
	s = s1;
	while (*s1)
		write(1, (s1++), 1);
	len = ft_strlen(s);
	free(s);
	return (len);
}

int	ft_put_uint_int(unsigned int nb)
{
	char	*s;
	char	*s1;
	int		len;

	s1 = ft_utoa(nb);
	s = s1;
	while (*s1)
		write(1, (s1++), 1);
	len = ft_strlen(s);
	free(s);
	return (len);
}

int	ft_put_hex_int(unsigned int nbr, char type)
{
	char	*s;
	char	*s1;
	int		len;

	s1 = ft_xtoa(nbr, type);
	s = s1;
	write(1, "0x", 2);
	while (*s1)
		write(1, (s1++), 1);
	len = ft_strlen(s);
	free(s);
	return (len + 2);
}

int	ft_put_void_int(unsigned long nbr)
{
	char	*s;
	char	*s1;
	int		len;

	if (nbr == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	s1 = ft_lxtoa(nbr);
	s = s1;
	write(1, "0x", 2);
	while (*s1)
		write(1, (s1++), 1);
	len = ft_strlen(s);
	free(s);
	return (len + 2);
}
