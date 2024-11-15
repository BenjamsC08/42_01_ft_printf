#include "lib_printf.h"

int	ft_intlen(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb > 2147483647)
	{
		i++;
		nb = -nb;
	}
	while (nb > 0)
	{
		i++;
		nb /= 10;
	}
	return (i);
}

int	ft_uintlen(unsigned int nb)
{
	int	i;

	i = 0;
	while (nb > 0)
	{
		i++;
		nb /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int				len_nb;
	char			*str_nb;
	unsigned int	nbr;
  unsigned int zero;

	nbr = n;
  zero = 0;
	if (n == 0)
		zero = 1;
	len_nb = ft_intlen(nbr);
	str_nb = (char *)malloc((len_nb + 1 + zero) * sizeof(char));
	if (! str_nb)
		return (0);
	*(str_nb + len_nb + zero) = 0;
  if (zero)
  { 
    str_nb[0] = '0';
    return (str_nb);
  }
	if (n < 0)
		nbr = -nbr;
	while ((len_nb--) > 0)
	{
		str_nb[len_nb] = (nbr % 10 + '0');
		nbr /= 10;
	}
	if (n < 0)
		*str_nb = '-';
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
	len = ft_uintlen(n);
	str = (char *)malloc((len + 1 + zero) + sizeof(char));
	if (! str)
		return (0);
	if (zero)
	{ 
		str[0] = '0';
		return (str);
	}
		while ((len--) > 0)
	{
		str[len] = (n % 10 + '0');
		n /= 10;
	}
	return (str);
}
