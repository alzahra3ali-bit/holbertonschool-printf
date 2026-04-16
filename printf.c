#include "main.h"
#include <string.h>


int _printf(const char *format, ...)
{
va_list args;
int count = 0;
int len;
char* s;

va_start(args, format);
if (*format == '\0')
{
return (-1);
}
while (*format != '\0')
{

if (*format == '%')
{   
format++;
switch (*format)
{
case 's':
s = va_arg(args, char*);
print_string(s);
format++;
count = count + strlen(s);
break;

case 'c':
len = va_arg(args, int);
print_char(len);
format++;
count = count + 1;
break;

case 'd':
len = va_arg(args, int);
print_Int(len);
format++;
count = count + int_len(len);
break;

case 'i':
len = va_arg(args, int);
print_Int(len);
format++;
count = count + int_len(len);
break;

}

}
count++;
print_char(*format);

format++;
}
va_end(args);
return (count);

}




int int_len(int n)
{
int len = 0;
if (n == 0)
return (1);
if (n < 0)
{
len++;      
n = -n;
}
while (n > 0)
{
n /= 10;
len++;
}
return (len);
}
