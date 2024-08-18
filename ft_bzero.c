#include <stddef.h>
void ft_bzero(void *s, size_t n)
{
    unsigned char *ptr;

    ptr = (unsigned char *)s;
    while (n--)
        *ptr++ = 0;
}
#include <stdio.h>
int main()
{
    char str[10] = "patatita";
    printf("%s\n", str);
    ft_bzero(str, 10);
    printf("%s\n", str); 
}