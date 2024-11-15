
#include "lib_printf.h"

int ft_put_char_int(char c)
{
    write(1, &c, 1);
    return 1;
}

int ft_put_str_int(char *str)
{
	int		len;

	len = 0;
	while (*str)
		len += ft_put_char_int(*(str++));
	return (len);
}
