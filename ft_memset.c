#include <stddef.h>
void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *ptr;

    ptr = (unsigned char *)s;
    while (n--)
        *ptr++ = (unsigned char)c;
    return (s);
}
/*#include <stdio.h>
int main()
{
    char str[20] = "patatita";
    printf("%s\n", str);
    ft_memset(str, '*', 4);
    printf("%s\n", str);
}*/