#include "main.h"
#include <string.h>


int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;
    int len;
    char *s;

    if (format == NULL)
        return (-1);

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;

            switch (*format)
            {
                case 's':
                    s = va_arg(args, char *);
                    if (s == NULL)
                    {
                        s = "(null)";
                    }
                    print_string(s);
                    count += strlen(s);
                    break;

                case 'c':
                    len = va_arg(args, int);
                    print_char(len);
                    count += 1;
                    break;

                case 'd':
                case 'i':
                    len = va_arg(args, int);
                    print_Int(len);
                    count += int_len(len);
                    break;

                case '%':
                    print_char('%');
                    count += 1;
                    break;

                default:
                    print_char('%');
                    print_char(*format);
                    count += 2;
                    break;
            }
        }
        else
        {
            if (format[1] != '\0')
            {
            print_char(*format);
            count++;
            }
        }

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
