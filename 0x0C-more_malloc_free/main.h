#ifndef __MAIN__H
#define __MAIN__H
int _putchar(char c);
unsigned int _strlen(char *s);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
char *str_concat(char *s1, char *s2);
void *_calloc(unsigned int nmemb, unsigned int size);
char *_memset(char *s, char b, unsigned int n);
int *array_range(int min, int  max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
#endif
