
#include "lib_printf.h"
#include <stdio.h>

int ft_putchar_int(char c)
{
    write(1, &c, 1);
    return 1;
}

int parse_format(va_list list, char type)
{
  char * str;

  str = va_arg(list, char *);
  printf("\n%s\n",str);
}

int ft_printf(const char* str, ... )
{
  va_list list;
  int length = 0;
  int i = 0;
  char *s;

  s = (char *)str - 1;
  va_start(list, str);

  while (*(++s))
  {
    if (*s == '%')
      parse_format(list, *(++s));
    else
      ft_putchar_int(*s);
    length++;
  }

  va_end(list);
  return length;
}

int main()
{
    ft_printf("shdfsjk%hk","jahsgdjagf");
}

