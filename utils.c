#include "lib_printf.h"

int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_intlen(unsigned int nb, char type)
{
	int	i;

	i = 0;
	if (type != 'u' && nb > 2147483647)
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

int ft_xlen(unsigned int nbr)
{
  int len;

  len = 0;
  while (nbr != 0)
  {
    len++;
    nbr /= 16;
  }
  return (len);
}


