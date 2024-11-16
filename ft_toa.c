#include "lib_printf.h"

char	*ft_itoa(int n)
{
	int				len_nb;
	char			*str_nb;
	unsigned int	nbr;

	nbr = n;
	len_nb = ft_intlen(nbr, 'i');
	if (n == 0)
		len_nb += 1;
	str_nb = (char *)malloc((len_nb + 1) * sizeof(char));
	if (! str_nb)
		return (0);
	*(str_nb + len_nb) = 0;
	if (n == 0)
		str_nb[0] = '0';
	else
	{
		if (n < 0)
			nbr = -nbr;
		ft_copy(str_nb, nbr, len_nb);
		if (n < 0)
			*str_nb = '-';
	}
	return (str_nb);
}

char	*ft_utoa(unsigned int n)
{
	int		len;
	char	*str;
	int		zero;

	zero = 0;
	if (n == 0)
		zero = 1;
	len = ft_intlen(n, 'u');
	str = (char *)malloc((len + 1 + zero) + sizeof(char));
	if (! str)
		return (0);
	if (zero)
	{ 
		str[0] = '0';
		return (str);
	}
  else
  {
	  while ((len--) > 0)
	  {
		  str[len] = (n % 10 + '0');
		  n /= 10;
	  }
  }
	return (str);
}

char *ft_xtoa(unsigned int nbr, char type)
{
  char    *base;
  char    *str;
  int     zero;
  int     len;

  base = "0123456789abcdef";
  zero = 0;
  if (type == 'X')
    base = "0123456789ABCDEF";
  len = ft_xlen(nbr);
  str = (char *)malloc(len + 1 + zero);
  if (!str)
    return (0);
  if (zero)
    str[0] = '0';
  else
  {
    while ((len--) > 0)
	  {
		   str[len] = base[nbr % 16];
		   nbr /= 16;
	  }
  }
  return (str);
}
