#include "main.h"
/*
 *a function print_char print  a character
 *@args argument list
 *return : the number of characters printed
 */
int print_char (va_list args) {
  char c;
  c = va_arg(args, int);
  write(1, &c, 1);
  
  return (1);
}
