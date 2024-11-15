#include "lib_printf.h"


char	*ft_itoa(int n)
{
	int				len_nb;
	char			*str_nb;
	unsigned int	nbr;

	nbr = n;
	len_nb = ft_intlen(nbr);
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
		while ((len--) > 0)
	{
		str[len] = (n % 10 + '0');
		n /= 10;
	}
	return (str);
}
