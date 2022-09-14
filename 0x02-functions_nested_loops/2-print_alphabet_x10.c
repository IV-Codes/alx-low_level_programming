#include "main.h"

/**
 * print_alphabet_x10 -Make alphabet x10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int l;
	 int n = 0;

	 while (n < 10)
	 {
		 l = 'a';
		 while (l <= 'z')
		 {
			 _putchar(1);
			 l += 1;
		 }

		 _putchar(10);
		 n += 1;
	 }
}
