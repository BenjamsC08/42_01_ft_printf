#include "lib_printf.h"

int ft_put_nbr_int(int nb)
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

int ft_put_uint_int(unsigned int nb)
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

int ft_put_hex_int(unsigned int nbr, char type)
{
	unsigned int	nb;
  char          *base;
  
  base = "0123456789abcdef";
	nb = nbr;
  if (type == 'X')
    base = "0123456789ABCDEF";
	if (nbr < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 16)
	{
		ft_put_hex_int(nbr / 16, type);
		ft_put_hex_int(nbr % 16, type);
	}
	if (nb < 16)
		write(1,&base[nbr], 1);
  return (ft_xlen(nbr));
}

