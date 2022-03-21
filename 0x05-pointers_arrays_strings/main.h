#ifndef HEADER_FILE
#define HEADER_FILE

#include <unistd.h>
int _putchar(char);
void reset_to_98(int *n);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);


//int _strlen(char *s);
int _strlen(char *s)
{
        int i;

        int len = 0;

        for (i = 0; s[i] != 0; i++)
        {
                len++;
        }
        return (len);
}

void _puts(char *str)
{
        write(1, str, _strlen(str));
        write(1, "\n", 2);
}

#endif
