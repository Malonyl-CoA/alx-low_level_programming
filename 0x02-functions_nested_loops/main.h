/**
 * This is how you create a header file.
 *
 * A header file is a file with extension .h 
 * which contains C function declarations and 
 * macro definitions to be shared between several source files. 
 */


#ifndef main_h 

/**
 * Putting the #ifndef wrapper around the contents
 * means the compiler only parses the header's contents once, 
 * and avoids redefinition errors
 */

#define main_h


int _putchar(char);

void print_alphabet(void);

void print_alphabet_x10(void);

int _islower(int c);

int _isalpha(int c);

int print_sign(int n);

int _abs(int);

int print_last_digit(int);

void jack_bauer(void);

void times_table(void);

int add(int, int);

void print_to_98(int n);

void print_times_table(int n);

#endif
