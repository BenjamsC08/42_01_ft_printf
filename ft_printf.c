
#include "lib_printf.h"



int parse_format(va_list list, char type)
{
	int		len;

	len = 0;
  //str = va_arg(list, char *); get next arg gives to printf
	if (type == 'c')
		len += ft_put_char_int(va_arg(list, int));
	if (type == 's')
		len += ft_put_str_int(va_arg(list, char *));
	if (type == 'p')
		len += 1;//ft_put_ptr_int(va_arg(list, void *));
	if (type == 'd' || type == 'i')
		len += ft_put_nbr_int(va_arg(list, int));
	if (type == 'u')
		len += ft_put_uint_int(va_arg(list, unsigned int));
	if (type == 'x' || type == 'X')
		len += ft_put_hex_int(va_arg(list, unsigned int), type);
	if (type == '%')
		len += ft_put_char_int('%');
	return (len);
}

int ft_printf(const char* str, ... )
{
  va_list list;
  int length = 0;
  char *s;

  s = (char *)str - 1;
  va_start(list, str);

  while (*(++s))
  {
    if (*s == '%')
      length += parse_format(list, *(++s));
    else
     length +=  ft_put_char_int(*s);
  }

  va_end(list);
  return length;
}

int main()
{
	#include <stdio.h>
	printf("%d",ft_printf("ab%x\n",150));
}

