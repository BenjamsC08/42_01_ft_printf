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
