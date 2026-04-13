#include "main.h"
/*
 *a function print_char print  a character
 *@c : the character to be printed
 *return : nothing
 */
void print_char (char c) {
  
    write(1, &c, 1);
  
}
